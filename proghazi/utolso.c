#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"prog1.h"

int karakter(char keresett){
    printf("Adja meg a keresett karaktert: ");
    scanf("%c",&keresett);

    return keresett;
}

int rfind_char(string hablaty, char keresett){
    int hossz = strlen(hablaty);
    int tarol = 0;
    for(int i = hossz; i >= 0; i--){
        if(hablaty[i] == keresett){
            return tarol = i+1;
        }
    }
    return -1;

}
int char_count(string hablaty, char keresett){
    int hossz = strlen(hablaty);
    int szamlalo = 0;
    for(int i = 0; i < hossz; i++){
        if(hablaty[i] == keresett){
            szamlalo++;
        }
    }
    return szamlalo;
}

int main(){
    string hablaty = get_string("Adj meg egy stringet: ");

    char keresett = karakter(keresett);
    int darab =char_count(hablaty,keresett);
    printf("A(z) %c karakter utolso elofordulasa a(z) %s szovegben: %d\n",keresett, hablaty, rfind_char(hablaty,keresett));
    printf("A(z) %c karakterbol %d db van a %s szovegben",keresett,darab ,hablaty);
    return 0;
}