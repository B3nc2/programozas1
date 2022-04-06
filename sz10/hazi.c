#include <stdio.h>
#include <stdlib.h>

int main(){

    //1. feladat
    int osszeg = 0;
    for(int i = 1; i<100; i++){
        osszeg += i;
    }
    printf("1. Feladat:\n");
    printf("Egesz szamok osszege 1-tol 100-ig: %d\n",osszeg);

    //2. feladat
    printf("\n");
    printf("2. Feladat:\n");
    printf("Ezernel kisebb pozitiv egesz szamok: ");
    int masodik = 0;
    for(int i = 999; i>=1; i--){
        if( i % 3 == 0 || i % 5 == 0){
        
            masodik += i;
        }

    }
    printf("%d összeg",masodik);
    //3. feladat
    int beker = 0;
    int eredmeny = 0;
    int pozitiv = 0;
    int negativ = 0;
    printf("\n3. Feladat:\n");
    printf("Egesz szam (vege: 0):");
    scanf("%d", &beker);
    while (beker != 0){
        eredmeny += beker;
        if(beker > 0){
            pozitiv++;
        }
        else{
            negativ++;
        }
        printf("Egesz szam (vege: 0):");
        scanf("%d", &beker);

    }
    printf("Elemek osszege: %d\n",eredmeny);

    //4,5. feladat
    printf("4, 5. feladat \nPozitiv elemek sz�ma: %d \nNegativ elemek szama: %d \n",pozitiv,negativ);

    //6. feladat
    int n1 = 0;
    int n2 = 0;
    printf("5. Feladat: \n");
    printf("Adja meg az elso vizsgalando szamot(n1): ");
    scanf("%d", &n1);
    printf("Adja meg a masodik vizsgalando szamot(n2): ");
    scanf("%d", &n2);
    if (n1 > n2){
        printf(">\n");
    }
    else if (n2 > n1){
        printf("<\n");
    }
    else{
        printf("=\n");
    }
    //7. feladat
    int oszthato = 0;
    printf("7. Feladat: ");
    printf("Adjon meg egy pozitiv egesz szamot: \n");
    scanf("%d", &oszthato);
    printf("Negyel oszthato szamok az intervallumon: ");
    for(int i = 1; i <= oszthato; i++){
        if(i % 4 == 0)
            printf("%d, ",i);
    }
    //8. feladat
    int szamlalo = 0;
    printf("\n8. Feladat: \n");
    printf("Adja meg a kezdeti erteket: \n");
    scanf("%d", &szamlalo);
    printf("Paratlan szamok visszafele: \n");
    while (szamlalo >= 1){
        if(szamlalo % 2 == 1)
            printf("%d ,",szamlalo);
        szamlalo--;
    }
}
