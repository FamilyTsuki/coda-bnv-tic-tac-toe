
#include <stdlib.h>
#include <stdio.h>
#include <time.h>   
int ia_debile(int tab[3][3]){
 
    while(1 == 1){
        srand(time(NULL));
        int choi = rand() % 8 + 1;
        if (choi < 3){
            if (tab[0][choi] == 0){
                return choi ;
            }
        }
        else if (choi < 6){
            if (tab[1][choi - 3] == 0){
                return choi ;
            }
        }
        else if (choi < 9){
            if (tab[2][choi - 6] == 0){
                return choi ;
            }
        }
        
     
    }  
}
void affiche(int tab[3][3]){
    printf("\n -------------- \n\n\n\n" );
    for (int i = 0; i < 3; i++){
        if (i != 0){
        printf(" -   -   - \n");
        }
        for (int j = 0; j < 3; j++){
            char carac;
            if (tab[i][j] == 1) {
                carac = 'X';
            }
            else if (tab[i][j] == 2) {
                carac = 'O';
            }
            else {
                carac = ' ';
            }
            if (j != 0){
                printf("| %c ", carac);
            }
            else
                printf(" %c ", carac);
        }
        printf("\n");
    }
    printf("\n" );
}

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