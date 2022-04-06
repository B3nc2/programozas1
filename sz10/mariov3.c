#include <stdio.h>

int main(){
    int sorokszama = 0;
    printf("Adja meg a sorok szamat: ");
    scanf("%d",&sorokszama);
    for(int i = 1; i <=sorokszama; i++)
    {
        for(int j = 1; j<=sorokszama-i; j++)
        {
            printf(" ");
            
        }
        for(int k = 1; k<=i; k++){
            printf("#");
        }
        printf("\t");
            for(int h = 1; h<=i; h++){
                printf("#");
            }
        
        printf("\n");
    }
return 0;

}