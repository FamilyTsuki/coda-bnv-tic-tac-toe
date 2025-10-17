#include <stdlib.h>
#include <stdio.h>


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
    int tab[3][3] = {{1,1,1},{NULL,NULL,NULL},{NULL,NULL,NULL}};
    affiche(tab);




}