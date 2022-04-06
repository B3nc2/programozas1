#include <stdio.h>

int main(){

    int tarol = 0;
    int reszosszeg = 0;
    for(int i = 1; i<500; i++){
        for(int j=1; j<i; j++){
        if(i%j!=0){
            reszosszeg = i % j;
            tarol+= reszosszeg;
            if(tarol==i){
                printf("%d tökéletes szam.\n",i);
            }
        }  
        } 
    }

return 0;

}