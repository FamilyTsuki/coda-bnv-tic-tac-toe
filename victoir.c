int victoir(int tab[3][3] , int joueur){ // fonction qui verifie si un joueur ou l'ia gagne ou si la grille est pleine

    
    if (tab[1][1] == joueur) // verifie si la case du milieu est occupee par joueur
        {
        if (tab[0][0] == joueur && tab[2][2] == joueur) // premiere diagonale
            {
            return joueur;
        }
        else if (tab[0][2] == joueur && tab[2][0] == joueur) // seconde diagonale
            {
            return joueur;
        }
    }

    for (int i = 0; i < 3; i++) // verifie les lignes et les colonnes
        {
        if (tab[i][0] == joueur){ // ligne
            if (tab[i][1] == joueur && tab[i][2] == joueur) // verifie les 3 cases de la ligne
                {
                return joueur;
            }
        }
        if (tab[0][i] == joueur){ // colonne
            if (tab[1][i] == joueur && tab[2][i] == joueur) // verifie les 3 cases de la colonne
                {
                return joueur;
            }
        }
    }
    for (int i = 0; i < 3; i++) // verifie si la grille est pleine si aucune victoire
        {
        for (int j = 0; j < 3; j++)
            {
            if (tab[i][j] == 0){ // verifie si une case est vide
                return 0;
            }
        }
    }

    return 3; // renvoi 3 si la grille est pleine (egaliter)
    
}
