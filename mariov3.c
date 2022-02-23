#include <stdio.h>

int main(){
    int sorokszama = 0;
    scanf("%d",&sorokszama);
    for(int i = 1; i <=sorokszama; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf(" #");
            
        }
        printf("\n");
    }
return 0;

}