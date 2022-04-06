#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>
#include <string.h>

void simplify(string source){

    char elozo = source[0];
    printf("%c",elozo);
    for(int i =1; i < strlen(source); i++){
        if(elozo != source[i]){
        printf("%c",source[i]);
    }
    elozo = source[i];
    }
puts("");
}
int main(int argc, string argv[]){
    simplify(argv[1]);


return 0;

}