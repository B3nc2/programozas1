#include <stdio.h>
int is_even(const int n){
    if(n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int is_odd(const int n){
    if(is_even(n) != 1){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){

    int beolvas = 0;

    printf("Adjon meg egy szamot: ");
    scanf("%d",&beolvas);

    is_even(beolvas);
    is_odd(beolvas);

    printf("A megadott szam paros: %s\n",is_even(beolvas) ? "igen" : "nem");
    printf("A megadott szam paratlan: %s\n",is_odd(beolvas) ? "igen" : "nem");

return 0;
}
