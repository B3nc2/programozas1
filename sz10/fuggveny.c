#include <stdio.h>
#include <stdlib.h>

/*int duplaz(int n){
    return 2*n;
}
*/
int my_abs(int n){
    if(n >= 0){
        return n;
    }
    else{
        return -1*n;
    }
}
int main(){
    int n = -5;
    printf("Az n valtozo ereke: %d\n",n);
    printf("Az n valtozo abszolut erteke: %d\n",my_abs(n));
return 0;

}
