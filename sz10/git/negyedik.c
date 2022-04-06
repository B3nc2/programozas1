#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>
#include <string.h>
void dekodolo(string szamok, string betuk, char cel[]){
    for(int i = 0; i < strlen(szamok); i++){
        int index = szamok[i] - '0';
        cel[i] = betuk[index];
    }
    cel[12] = '\0';
    printf("%s\n",cel);

}

int main(){

    string szamok = "25635146017";
    string betuk = "ZAPGMROS";
    char cel[12];
    dekodolo(szamok,betuk,cel);

return 0;

}