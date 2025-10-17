#include <stdlib.h>
#include <stdio.h>

#include <time.h>   
int ia_debile(tab[3][3]){
    while(TRUE){
        srand(time(NULL));
        int choi = rand() % 8 + 1;
        if (choi < 3){
            if (tab[0][choi] == 0){
                return choi 
            }
        }
        else if (choi < 6){
            if (tab[1][choi - 3] == 0){
                return choi 
            }
        }
        else if (choi < 9){
            if (tab[2][choi - 6] == 0){
                return choi 
            }
        }
        
     
    }  
}
void affiche(int tab[3][3]){
    for (int i = 0; i < 3; i++){
        printf("  -   -   - \n");
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
            printf("| %c ", carac);
        }
        printf("|\n");
    }
    printf("  -   -   - \n");
}
int main(){
    int tab[3][3] = {
        {1,1,1},
        {0,0,0},
        {0,0,0}
    };
    affiche(tab);




}