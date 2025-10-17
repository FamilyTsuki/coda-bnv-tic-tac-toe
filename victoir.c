
int victoir(int **tab){
    for (int i =0 ; i <3 ; i++){
        if (tab[0][i] == TRUE){
            if (tab[1][1] == TRUE){
                if (i == 0 && tab[2][2] == TRUE){
                    return 1
                }
            }

        }

    }


}
int victoir(int **tab){
    if (tab[1][1] == True){
        if (tab[0][0] == TRUE && tab[2][2] == TRUE){
            return 1;
        }
        else if (tab[0][2] == TRUE && tab[2][0] == TRUE){
            return 1;
        }
    }
    else if (tab[0][0] == TRUE){
        if (tab[0][1] == TRUE && tab[0][2] == TRUE){
            return 1;
        }
        else if (tab[1][0] == TRUE && tab[2][0] == TRUE){
            return 1;
        }
    }
    else if (tab[2][2] == TRUE){
        if (tab[2][0] == TRUE && tab[2][1] == TRUE){
            return 1;
        }
        else if (tab[0][2] == TRUE && tab[1][2] == TRUE){
            return 1;
        }
    }
    else {
        return 0;
    }


}

int main(){

    int tab[3][3] = {{NULL,NULL,NULL},{NULL,NULL,NULL},{NULL,NULL,NULL}};
    
    affiche("%d",victoir(tab));
    int tab[3][3] = {{TRUE,TRUE,TRUE},{NULL,NULL,NULL},{NULL,NULL,NULL}};
    printf("%d",victoir(tab));
}