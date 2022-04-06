#include <stdio.h>
#define SIZE 200
int main(){
    int beker = 0;
    int pozitiv = 0;
    int max = 0;
    int atlag =0;
    int tarol = 0;
    do{
        printf("Adjon meg egy pozitív egész számot! (vége : 0) ");
        scanf("%d",&beker);
        if(beker <0){
            printf("Hiba! Adjon meg egy pozitív egész számot!\n");
            break;
        }
        if(beker > 0){
            pozitiv += 1;
           if(max < beker){
               max = beker;
           }
           tarol += beker; 
        }
    }while(beker != 0);
    atlag = tarol / pozitiv;
    printf("Pozitív értékek száma: %d\n",pozitiv);
    printf("A legnagyobb elem száma %d\n",max);
    printf("A számok átlaga %d\n",atlag);
return 0;

}