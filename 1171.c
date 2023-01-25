#include <stdio.h>

int main (){
	int i, m[2001], n, aux;
	scanf ("%d", &n);
	for (i=0; i<2000; i++){
		m[i]=0;
	}
	for (i=0; i<n; i++){
		scanf ("%d", &aux);
		m[aux]+=1;
	}
	for (i=0; i<2000; i++){
		if (m[i]!=0){
			printf ("%d aparece %d vez(es)\n", i, m[i]);
		}
	}
	return 0;
}