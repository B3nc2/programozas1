#include <stdio.h>

int main(){

int szam = 0;
int pozitiv = 0;
int negativ = 0;
do{
    printf("Adj meg egy egeszet (vege : 0))!: ");
    scanf("%d",&szam);
    if(szam > 0){
    ++pozitiv;
    }
    else if (szam < 0)
    {
        ++negativ;
    }
    
}while(szam != 0);
printf("\n");
printf("A beolvasott pozitiv elemek szama: %d\n",pozitiv);
printf("A beolvasott negativ elemek szama: %d\n",negativ);

return 0;

}