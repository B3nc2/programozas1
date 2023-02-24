#include <stdio.h>
#include <math.h>

int main(){

    //Elso Gomb
    float r = 0;

    printf("Adja meg  gomb sugarat centimeterben:");
    scanf("%f",&r);

    printf("A gomb felszine: %.2fcm\n",(4*pow(r, 2)*M_PI));
    printf("A gomb terfogata: %.2fcm\n",((4*pow(r, 3)*M_PI)/3));



    //Masodik
    int osztando = 0;
    int oszto = 0;
    
    printf("Adjon meg az osztandot:");
    scanf("%d",&osztando);

    printf("Adjon meg egy osztot:");
    scanf("%d",&oszto);

    printf("A hanyados: %d, a maradek:%d\n",(osztando/oszto), (osztando%oszto));


    //Harmadik fizzbuzz

    for(int i = 1; i<=100; i++){
        if(i%3 == 0){
            if (i%3 == 0 && i%5 == 0){
            printf("fizzbuzz\n");
            }
            else{
            printf("fizz\n");
        }
        }
        else if(i%5 == 0){
        printf("buzz\n");
        }
        else{
            printf("%d\n",i);
        }

    }

    return 0;

}