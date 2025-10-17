#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include <unistd.h>
int main()
{
    int joueur1 = 1;
    int joueur2 = 2;
    int fin = 0;
    int grille[3][3] = {{0,0,0}};
    
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
                int r ;
                int c ;
                if (choi < 3)
                {
                    
                    r = 0;
                    c = choi;

                }
                else if (choi < 6)
                {
                    
                    r = 1;
                    c = choi - 3;
                }
                else if (choi < 9)
                {
                    
                    r = 2;
                    c = choi - 6;
                }
                if (grille[r][c] != 0)
                {
                    printf("Case deja occupee, choisissez une autre case.\n");
                }
                else 
                {
                    grille[r][c] = joueur1;
                    ok = 1;
                }
            }
            
        }

    
        
    
        affiche(grille);
        
        if (victoir(grille , joueur1) == 3)
        {
            printf("bien jouer tu a egaliter");
            fin = 1;

        }
        else if (victoir(grille , joueur1) == 1)
        {
            
            printf("bien jouer tu a gagner");
            fin = 1;
        }

        int choi_ia = ia_debile(grille);

        if (choi_ia < 3)
        {
            grille[0][choi_ia] = 2;
        }
        else if (choi_ia < 6)
        {
            grille[1][choi_ia - 3] = 2;
        }
        else if (choi_ia < 9)
        {
            grille[2][choi_ia - 6] = 2;
        }
        if (victoir(grille , joueur2) == 3)
        {
            printf("bien jouer tu a egaliter");
            fin = 1;
        }
        else if (victoir(grille , joueur2) == 2)
        {
            printf("bien jouer tu a perdu");
            fin = 1;
        }
        
        
    }
    return 0;
}

