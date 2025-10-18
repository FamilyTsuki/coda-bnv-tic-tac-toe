
int victoir(int tab[3][3] , int joueur){

    
    if (tab[1][1] == joueur){
        if (tab[0][0] == joueur && tab[2][2] == joueur){
            return joueur;
        }
        else if (tab[0][2] == joueur && tab[2][0] == joueur){
            return joueur;
        }
    }

    for (int i = 0; i < 3; i = i++){
        if (tab[i][0] == joueur){
            if (tab[i][1] == joueur && tab[i][2] == joueur){
                return joueur;
            }
        }
        if (tab[0][i] == joueur){
            if (tab[1][i] == joueur && tab[2][i] == joueur){
                return joueur;
            }
        }
    }
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            if (tab[i][j] == 0){
                return 0;
            }
        }
    }

    return 3;
    


}
