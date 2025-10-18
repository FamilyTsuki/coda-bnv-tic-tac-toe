
#include "tic_tac_toe.h"

int ia_intelligent(int tab[3][3]) // fonction qui fait un choix intelligent pour l'ia difficile
    {
    
    for (int i = 0; i < 3; i++) //  verifier si l'ia a l'oportuniter de gagner en 1 coup
        { 
        for (int j = 0; j < 3; j++)
            {
            if (tab[i][j] == 0) // prand une case vide
                {
                tab[i][j] = 2; // test le coup
                if (victoir(tab, 2) == 2) // verifier si il gagne
                    {
                    return i * 3 + j; // ranvoi la case a jouer
                }
                tab[i][j] = 0; // annuler le coup si non
            }
        }
    }

    // si l'ia na pas pus gagner il verrifie si le joueur peux gagner en 1 coup pour l'en ampecher
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tab[i][j] == 0)// prand une case vide
            {
                tab[i][j] = 1; // test le coup du joueur
                if (victoir(tab, 1) == 1) // verifier si le joueur gagne
                {
                    tab[i][j] = 0;
                    return i * 3 + j; // renvoi la case a bloquer
                }
                tab[i][j] = 0; // annuler le coup si non
            }
        }
    }

    return ia_debile(tab); // si rien a marcher fair un truc aleatoir grace a ia debile
}