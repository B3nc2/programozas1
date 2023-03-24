#include<stdio.h>
#include<stdlib.h>

int beker(int vonal){
    printf("Adja meg a vonalak szamat");
    scanf("%d",&vonal);

    return vonal;
}
void line(char c, int length){
    for(int i = 1; i<=length; i++){
        printf("%c",c);

    }
    puts("");
}

int main(){
    int vonal = beker(vonal);

    printf("hello\n");
    line('-', vonal);
    printf("world\n");

    return 0;
}