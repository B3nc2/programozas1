#include <stdio.h>

int main()
{
    int szam;
	printf("Pozitív egész szám: ");
	scanf("%d", &szam);
	while(szam <=0){
		printf("Pozitív egész szám: ");
		scanf("%d", &szam);
	}
	printf("\n");
	printf("A megadott pozitív egész szám: %d\n",szam);

	return 0;
}