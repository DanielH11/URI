#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int a, b, i, j, soma, soma2;
	char num[12], novonum[12];
	scanf ("%d", &a);
	scanf ("%d", &b);
	while (a&&b){
		j=0;
		soma=a+b;
		snprintf (num, 12, "%d",soma);
		for (i=0; i<strlen(num); i++){
			if (num[i]!='0'){
				novonum[j]=num[i];
				j++;
			}
		}
		printf ("%s", novonum);
		memset(novonum, 0, sizeof (novonum));
		printf ("\n");
		scanf ("%d", &a);
		scanf ("%d", &b);
		
	}
	return 0;
}