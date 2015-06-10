#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){

	int i, n, palindromo;
	char* palabra = (char*)malloc(100);

	palindromo = 1;

	printf ("escriba una palabra :");
	gets(palabra);

	n=strlen(palabra);

	for (i=0;i<n/2;i++){
		if (palabra[i] != palabra[n-i-1]){;
			palindromo = 0;
		};
	};

	if (palindromo)
		printf (" 1 \n");
	else
		printf (" 0 \n");

	free (palabra);

	return (0);
}
