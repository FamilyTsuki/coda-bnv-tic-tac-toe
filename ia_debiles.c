#include <time.h>  
#include <stdlib.h> 
int ia_debile(int tab[3][3]){ // fonction qui fait un choix aleatoire pour l'ia facile
    srand((unsigned)time(NULL)); // seed une seule fois vien de https://stackoverflow.com
    int max_i = 100; // nombre max d'essaie aleatoire pour eviter une boucle infinie ou trop longue
    while(max_i > 0) // boucle d'essaie aleatoire
        {
        int choi = rand() % 9; // choix aleatoire entre 0 et 8
        if (tab[choi / 3][choi % 3] == 0){ // verifie si la case est libre
                return choi ; // renvoi le choix mettant fin a la fonction et a la boucle
        }        
        max_i --; // decremente le nombre d'essaie restant
    }  
    for (int i = 0; i < 3; i++){ // si la boucle aleatoire na pas marcher (peu probable) on fait une recherche lineaire
        for (int j = 0; j < 3; j++){
            if (tab[i][j] == 0){
                return i * 3 + j;
            }
        }
    }
    
}
