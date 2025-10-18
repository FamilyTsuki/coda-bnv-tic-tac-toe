
#include <stdio.h>

void affiche(int tab[3][3]) // fonction qui affiche la grille
    {
    printf("\n -------------- \n\n\n\n" );
    for (int i = 0; i < 3; i++){
        if (i != 0){
        printf(" -   -   - \n"); // pour afficher les barres horizontales entre les lignes
        }
        for (int j = 0; j < 3; j++)
            {
            char carac; // variable pour stocker le caractere a afficher
            if (tab[i][j] == 1) // si la case est occupee par le joueur
                {
                carac = 'X';
            }
            else if (tab[i][j] == 2) // si la case est occupee par l'ia
                {
                carac = 'O';
            }
            else // si la case est vide
                {
                carac = ' ';
            }
            if (j != 0) // pour afficher les barres verticales entre les cases
                {
                printf("| %c ", carac); // affiche le caractere avec une barre verticale avant
            }
            else
                printf(" %c ", carac); // affiche le caractere sans barre verticale avant
        }
        printf("\n"); // saut de ligne apres chaque ligne de la grille
    }
    printf("\n" ); // saut de ligne apres la grille
}
