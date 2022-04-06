#include <stdio.h>

int main()
{
    int szam;
    printf("Adjon meg egy számot!\n")
    scanf("%d", &szam);
    if(szam>0){
        printf(" %d szám pozitív", szam);
    }
    else if(szam < 0){
        printf(" %d szám negatív",szam);
    }
    else{
        printf("%d szám nulla",szam);
    }
    return 0;
}