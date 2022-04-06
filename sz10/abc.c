
#include <stdio.h>
#include "prog1.h"
#define SIZE 26

void abc_fill(char tomb[])
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        tomb[c - 'a'] = c;
    }
    
    tomb[SIZE] = '\0';
}

int main()
{

    char abc[SIZE + 1];
    abc_fill(abc);
    
    printf("%s\n", abc);
    
    return 0;
}