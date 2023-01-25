#include <stdio.h>

int main(){
	int i, j, k, m[10000], n, peak[10000], pico;
	while (scanf ("%d", &n)!=0){
		j=0;
		pico=0;
		for (i=0; i<n; i++){
			scanf ("%d", m[i]);
			if (i>0 && m[i]>m[i-1]){
				peak[j]=1;
				j++;
			}
			else if (i>0 && m[i]<m[i-1]){
				peak[j]=0;
				j++;
			}
		}
		for (k=1; k<j; k++){
			if (m[k]!=m[k-1]){
				pico++;
			}
		}
		if (m[0]!=m[k]){
			pico++;
		}
		printf ("%d\n", pico);
	}
	return 0;
}