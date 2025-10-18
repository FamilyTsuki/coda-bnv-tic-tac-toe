#include <stdlib.h>
#include <stdio.h>
#include "tic_tac_toe.h"
#include <unistd.h>
int main() // fonction principale
{
    int joueur1 = 1; // identifi le joueur  comme 1
    int joueur2 = 2; // identifi l'ia comme 2
    int fin = 0; // variable de fin de partie
    int choi_ia; // variable dans la quel l'ia va mettre son choix
    int choi; // variable dans la quel le joueur va mettre son choix
    int ok; // variable de boucle de verification du choix du joueur
    int choi_difficulter = 0; // variable de boucle de choix de la difficulter
    int grille[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}} ; // initialisation de la grille de jeux 0 represente une case vide
    
    int difficulter; // variable de difficulter 1 = facile 2 = dificile
 
    while(choi_difficulter == 0)
        {
        printf("choisisser la difficulter 1 = facile 2 = dificile :\n");
        if (scanf("%d", &difficulter) != 1) // vérifie que l'entrée est un entier
            { 
            printf("Entrée invalide, veuillez saisir un nombre.\n");
            while (getchar() != '\n'); // vide le buffer
                continue;
        }
        else if (difficulter !=  1 && difficulter != 2) // vérifie que l'entrée est bien 1 ou 2
            {
            printf("Nombre incorrect, il ne peux etre que 1 ou 2 .\n");
            
        }
        else // entrée valide
            {
            if (difficulter == 1){
                printf("vous avez choisis la difficulter facile\n");
            }
            else {
                printf("vous avez choisis la difficulter dificile\n");
            }
            choi_difficulter = 1; // sortir de la boucle
        }
    }
    
    while (fin != 1) // boucle principale du jeux
        {


        affiche(grille); // affiche la grille vide au debut du jeux et aprest chaque choix de l'ia

        
        ok = 0; 
        while(ok != 1) // boucle de verification du choix du joueur
            {
            printf("Choisissez un nombre de 0 a 8 :\n");
            if (scanf("%d", &choi) != 1) // vérifie que l'entrée est un entier
            { 
                printf("Entrée invalide, veuillez saisir un nombre.\n");
                while (getchar() != '\n'); // vide le buffer
                    continue;
            }
            else if (choi < 0 || choi > 8) // vérifie que l'entrée est bien entre 0 et 8 compris
            {
                printf("Nombre incorrect, doit etre entre 0 et 8.\n");
                
            }
            else // entrée valide
            {
                int l = choi / 3; // calcul de la ligne en dividant par 3
                int c  = choi % 3; // calcul de la colonne en recupérant le reste de la division par 3
                
              
                if (grille[l][c] != 0) // verifie si la case est deja occupee
                {
                    printf("Case deja occupee, choisissez une autre case.\n");
                }
                else // case libre
                {
                    grille[l][c] = joueur1; // met le choix du joueur dans la grille
                    ok = 1; // sortir de la boucle de verification
                }
            }
            
        }

    
        
    
        affiche(grille); // affiche la grille aprest le choix du joueur
        
        if (victoir(grille , joueur1) == 3) // verifie si la grille est pleine
            {
            printf("egaliter ! \n");
            fin = 1; // met fin a la partie

        }
        else if (victoir(grille , joueur1) == 1) // verifie si le joueur a gagner
            {
            
            printf("bien jouer tu a gagner ! \n");
            fin = 1; // met fin a la partie
        }
        if (fin == 1) // verifie si la partie est fini pour ne pas faire jouer l'ia
            {
            break; // sort de la boucle principale
        }
        
        
        if (difficulter == 2) // si la difficulter est difficile
            {
            
            choi_ia = ia_intelligent(grille); // appel de l'ia intelligente pour avoir le choix de l'ia
        }
        else // si la difficulter est facile
            {
            
            choi_ia = ia_debile(grille); // appel de l'ia debile pour avoir le choix de l'ia
        }
        
        int l = choi_ia / 3; // calcul de la ligne en dividant par 3
        int c  = choi_ia % 3; // calcul de la colonne en recupérant le reste de la division par 3
       
        grille[l][c] = 2; // met le choix de l'ia dans la grille
        
        affiche(grille); // affiche la grille aprest le choix de l'ia
        
        if (victoir(grille , joueur2) == 3) // verifie si la grille est pleine
        {
            printf("egaliter ! \n");
            fin = 1; // met fin a la partie
        }
        else if (victoir(grille , joueur2) == 2) // verifie si l'ia a gagner
        {
            printf("\nTu a perdu ! \n");
            fin = 1; // met fin a la partie
        }
        
        
    }
    return 0; // fin du programme
}

