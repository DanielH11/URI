#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int i, j=0;
	char frase[1002], pfrase[1002];
	fgets (pfrase, 1002, stdin);
	for (i=0; pfrase[i-2]!='\n'; i++){
		if (pfrase[i]!='p'){
			frase[j]=pfrase[i];
			j++;
		}
		else{
			i++;
			frase[j]=pfrase[i];
			j++;
		}
	}
	frase[j+1]='\n';
	printf ("%s", frase);
	return 0;
}