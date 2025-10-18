#include <time.h>  
#include <stdlib.h> 
int ia_debile(int tab[3][3]){
    srand((unsigned)time(NULL)); // seed une seule fois
    int max_i = 100;
    while(max_i > 0){
        int choi = rand() % 9; // 0..8
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
        else { // choi < 9
            if (tab[2][choi - 6] == 0){
                return choi ;
            }
        }
        
        max_i --;
    }  
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (tab[i][j] == 0){
                return i * 3 + j;
            }
        }
    }
    return 0; // sécurité si aucune case (ne devrait pas arriver)
}
