#include <stdio.h>

int main(){

for(int i = 1; i < 500; i++){
    int osszeg = 0;
    for(int j = 1; j <i; j++){
        if(i % j == 0){
            osszeg+=j;
        }
    }
    if(osszeg == i){
        printf("%d\n",i);
    }
}
return 0;

}