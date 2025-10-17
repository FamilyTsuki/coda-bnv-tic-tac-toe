
#include <stdlib.h>
#include <stdio.h>

int victoir(int tab[3][3] , int joueur){
    if (tab[1][1] == joueur){
        if (tab[0][0] == joueur && tab[2][2] == joueur){
            return tab[0][0];
        }
        else if (tab[0][2] == joueur && tab[2][0] == joueur){
            return tab[0][2];
        }
    }
    if (tab[0][0] == joueur){
        if (tab[0][1] == joueur && tab[0][2] == joueur){
            return tab[0][1];
        }
        else if (tab[1][0] == joueur && tab[2][0] == joueur){
            return tab[1][0];
        }
    }
    if (tab[2][2] == joueur){
        if (tab[2][0] == joueur && tab[2][1] == joueur){
            return tab[2][0];
        }
        else if (tab[0][2] == joueur && tab[1][2] == joueur){
            return tab[0][2];
        }
    }
    
    return 0;
    


}

int main(){
    int j1 = 1;
    int j2 = 2;
    int tab[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    printf("%d\n", victoir(tab,1));

    int tab2[3][3] = {
        {1,1,1},
        {0,0,0},
        {0,0,0}
    };
    printf("%d\n", victoir(tab2,1));
}
