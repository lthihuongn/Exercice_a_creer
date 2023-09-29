#include <stdio.h>
int CalculBinaire(int nombreB){
    int somme=0;
    int tabB[4]={};
    int jsp;
    for (int i = 0;i;++i){
        if (tabB[i] == 0 && tabB[i+1]==1){

        }
        else if (tabB[i]== 1 && tabB[i+1]== 1){
            somme=0;
            tabB[i+1]=1;
            return somme, tabB[i];
        }
    }
}

int ou_exclusif(int nb1, int nb2) {
    if ((nb1 == 0 || nb1 == 1) && (nb2 == 0 || nb2 == 1)) {
        if ((nb1 == 1 && nb2 == 1) || (nb1 == 0 && nb2 == 0)) {
            return 0;
        } else {
            return 1;
        }
    } else {
        printf("Erreur : Les entrees doivent etre 0 ou 1.\n");
        return -1;
    }
}
int main(){
    int somme=0;
    int nombreB;

    int nombre1;
    int nombre2;
    printf("choisissez 1 ou 0 \n");
    scanf("%d",&nombre1);
    scanf("%d",&nombre2);
    if ((nombre1 == 0 || nombre1 == 1) && (nombre2 == 0 || nombre2 == 1)) {
        printf("%d + %d = %d", nombre1, nombre2, ou_exclusif(nombre1,nombre2));
    }else{
        printf("%d", ou_exclusif(nombre1,nombre2));
    }
    getchar();

}