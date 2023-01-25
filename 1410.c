#include <stdio.h>

int main (){
	int a, b[10000], c[10000], d, flag=0, i, j;
	scanf ("%d %d", &a, &d);
	do{
		for (i=0; i<a; i++){
			scanf ("%d", &b[i]);
		}
		for (j=0; j<d; j++){
			scanf ("%d", c[j]);
		}
		for (i=0; i<a; i++){
			if (b[i]!=c[j-1] || (b[i]!=c[j-1] && b[i]!=c[j])){
				printf ("Y\n");
				i=a;
				flag=1;
			}
		}
		if (!flag)
			printf ("Y\n");
		scanf ("%d %d", &a, &d);	
	}while (a && d);
	return 0;
}