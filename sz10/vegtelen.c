#include <stdio.h>

int main(){

int szam = 0;
while(1){
    printf("Pozitiv egesz: ");
    scanf("%d",&szam);
    if(szam > 0){
        break;
    }
}
printf("\n");
printf("A beolvasott pozitiv szam: %d\n",szam);
return 0;

}