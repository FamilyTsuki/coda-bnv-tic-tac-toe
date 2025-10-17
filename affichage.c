#include <stdlib.h>
#include <stdio.h>


void affiche(int **tab){
    
    for (int i =0 ; i <3 ; i++){
        printf("  -   -   - \n");
        for (int j =0 ; j <3 ; j++){
            printf("| %d ",tab[j]);
    }
    printf("|\n");
    }
    printf("  -   -   - \n");

}
int main(){
    int tab[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    
    affiche(tab);




}