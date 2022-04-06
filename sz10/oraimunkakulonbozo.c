#include <stdio.h>


int main(){

    puts("Hány darab számot szeretne bevinni?");

    int darab;
    scanf("%d",&darab);
    int tomb[darab];
    for(int i = 0; i < darab; i++){
        printf("%d. szam: ",i+1);
        scanf("%d",&tomb[i]);
    }

    for(int i = 0; i < darab; i++){
        printf("A megadott szamok: ");
        if(i > 0){
            printf(", ");
        }
        printf("%d",tomb[i]);
        
    }



return 0;

}
