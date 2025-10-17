
int victoir(int tab[3][3] , int joueur){
    int n = 0;
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
        n ++;
        }
    }
    if (n == 8){
        return 3;
    }
    if (tab[1][1] == joueur){
        if (tab[0][0] == joueur && tab[2][2] == joueur){
            return joueur;
        }
        else if (tab[0][2] == joueur && tab[2][0] == joueur){
            return joueur;
        }
    }

    for (int i = 0; i < 3; i = i+2){
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


    return 0;
    


}