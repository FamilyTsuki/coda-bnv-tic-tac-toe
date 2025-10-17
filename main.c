#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include <unistd.h>
int main()
{
    int joueur1 = 1;
    int joueur2 = 2;
    int fin = 0;
    int grille[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}} ;
    
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
            printf("bien jouer tu a egaliter\n");
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
        int choi_ia = ia_debile(grille);
        int l = choi_ia / 3;
        int c  = choi_ia % 3;
       
        grille[l][c] = 2;
        affiche(grille);
        if (victoir(grille , joueur2) == 3)
        {
            printf("bien jouer tu a egaliter\n");
            fin = 1;
        }
        else if (victoir(grille , joueur2) == 2)
        {
            printf("bien jouer tu a perdu\n");
            fin = 1;
        }
        
        
    }
    return 0;
}

