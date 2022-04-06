#include <stdio.h>

int kerulet(int oldal){
    return 4*oldal;
}
int terulet(int oldal){
    return oldal * oldal;
}

int main(){

    int oldalhossz;
    printf("Adjon meg egy pozitiv egesz szamot: %d\n");
    scanf("%d", &oldalhossz);
    printf("\n");
    prinf("A negyzet kerulete: %d cm\n",kerulet(oldal));
    prinf("A negyzet kerulete: %d cm\n",terulet(oldal));

    return 0;

}