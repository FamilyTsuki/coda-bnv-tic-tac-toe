#include <stdlib.h>
#include <stdio.h>
#include "tic_tac_toe.h"
#include <unistd.h>
int main()
{
    int joueur1 = 1;
    int joueur2 = 2;
    int fin = 0;
    int choi_ia;
    int grille[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}} ;
    
    int difficulter;
 
        while(1 == 1)
        {
    printf("choisisser la difficulter 1 = facile 2 = dificile :\n");
    if (scanf("%d", &difficulter) != 1) // vérifie que l'entrée est un entier
    { 
        printf("Entrée invalide, veuillez saisir un nombre.\n");
        while (getchar() != '\n'); // vide le buffer
            continue;
    }
    else if (difficulter !=  1 && difficulter != 2)
    {
        printf("Nombre incorrect, il ne peux etre que 1 ou 2 .\n");
        
    }
    else {
        if (difficulter == 1){
            printf("vous avez choisis la difficulter facile\n");
        }
        else {
            printf("vous avez choisis la difficulter dificile\n");
        }
        break;
    }
    }
    while (fin != 1)
    {


        affiche(grille);

        int choi;
        int ok = 0; 
        while(ok != 1)
        {
            printf("Choisissez un nombre de 0 a 8 :\n");
            if (scanf("%d", &choi) != 1) // vérifie que l'entrée est un entier
            { 
                printf("Entrée invalide, veuillez saisir un nombre.\n");
                while (getchar() != '\n'); // vide le buffer
                    continue;
            }
            else if (choi < 0 || choi > 8)
            {
                printf("Nombre incorrect, doit etre entre 0 et 8.\n");
                
            }
            else 
            {
                int l = choi / 3;
                int c  = choi % 3;
                
              
                if (grille[l][c] != 0)
                {
                    printf("Case deja occupee, choisissez une autre case.\n");
                }
                else 
                {
                    grille[l][c] = joueur1;
                    ok = 1;
                }
            }
            
        }

    
        
    
        affiche(grille);
        
        if (victoir(grille , joueur1) == 3)
        {
            printf("egaliter\n");
            fin = 1;

        }
        else if (victoir(grille , joueur1) == 1)
        {
            
            printf("bien jouer tu a gagner\n");
            fin = 1;
        }
        if (fin == 1)
        {
            break;
        }
        sleep(1);
        
        if (difficulter == 2){
            choi_ia = ia_intelligent(grille);
        }
        else {
            choi_ia = ia_debile(grille);
        }
        int l = choi_ia / 3;
        int c  = choi_ia % 3;
       
        grille[l][c] = 2;
        affiche(grille);
        if (victoir(grille , joueur2) == 3)
        {
            printf("egaliter\n");
            fin = 1;
        }
        else if (victoir(grille , joueur2) == 2)
        {
            printf("Tu a perdu\n");
            fin = 1;
        }
        
        
    }
    return 0;
}

