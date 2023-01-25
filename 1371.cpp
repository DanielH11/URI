#include <stdio.h>
#include <math.h>

int main (){
	int i, j=-1, k, m[10000], n[1000];
	m[0]=0;
	for (i=1; m[i]<=25000000; i++){
		m[i]=m[i-1]+2*(i-1)+1;
	}
	do{
		j++;
		scanf ("%d", &n[j]);
	}while (n[j]!=0);
	for (i=0; i<=j; i++){
		for (k=1; m[k]<=n[i]; k++){
			if (m[k+1]>n[i])
				printf ("%d\n", m[k]);
			else
				printf ("%d ", m[k]);
		}
	}
	/*for (i=0; i<j; i++){
		if (sqrt(n[i]))
	}*/
	return 0;
}