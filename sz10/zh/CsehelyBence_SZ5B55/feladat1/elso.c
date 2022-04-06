#include <stdio.h>
#include "prog1.h"
#include <string.h>


void simplify(string source){
    int length = 0;
    int counter = 0;
    int tmp = 0;
    for (int i = 0; i <= strlen(source) - 1; i++)
    {
        length += 1;
        
    }
    if(length <4){
    printf("Hiba! adj meg egy legalabb 4 karakterbol allo sztinget!\n");
    } 
    else{
        /*nt j = 1;
        while(j <= strlen(source) - 1){
        int i = 0;
        
        string s1 = i;
        string s2 = j;
    if (strcmp(s1, s2) == 0)
    {
        printf("%s",s1);
    
        }
        i++;
        j++;
    }*/  
    printf("%s\n",source);
    }
}
int main(int argc, string argv[]){
    if(argc!=2){
        printf("Hiba! Adj meg pontosan egy sztringet!\n");
    }
    else{
        
        simplify(argv[1]);
    }
    
return 0;

}