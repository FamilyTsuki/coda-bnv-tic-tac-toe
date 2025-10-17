
#include <stdio.h>

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
