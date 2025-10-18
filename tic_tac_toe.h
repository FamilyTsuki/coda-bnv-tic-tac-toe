#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__
int victoir(int tab[3][3] , int joueur); // fonction qui verifie si un joueur ou l'ia gagne ou si la grille est pleine
void affiche(int tab[3][3]); // fonction qui affiche la grille
int ia_debile(int tab[3][3]); // fonction qui fait un choix aleatoire pour l'ia facile
int ia_intelligent(int tab[3][3]); // fonction qui fait un choix intelligent pour l'ia difficile
#endif 
