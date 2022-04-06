#include <stdio.h>

float valid_triangle(float a, float b,float c){
    do{
        printf("Kerem adja meg a haromszog oldalainak hosszat:\n");
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);

    }while((a <= 0) || (b <= 0 ) || (c <= 0));

    if((a+b)>c && (a+c)>b && (b+c)>a){
        return 1;
    }
    else{
        return 0;
    }



}

int main(){

    float a = 3.0f;
    float b = 4.0f;
    float c = 5.0f;

    valid_triangle(a,b,c);

    printf("A megadott haromszog %s szerkeztheto.\n", valid_triangle(a,b,c) ? "igen" : "nem");

return 0;
}