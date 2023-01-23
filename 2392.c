#include <stdio.h>

int main (){
	int i, j, k, l, m, sapos, pedras, dist[100], local[100], val[100];
	scanf ("%d %d", &pedras, &sapos);
	for (i=1; i<=sapos; i++){
		scanf ("%d", &local[i]);
		scanf ("%d", &dist[i]);
	}
	for (i=1; i<=pedras; i++){
		val[i]=0;
	}
	for (i=1; i<=sapos; i++){
		for (j=1; j<=pedras; j++){
			if (j==local[i]){
				val[j]=1;
				k=j;
				l=dist[i];
				while (l+k<=pedras){
					val[k+l]=1;
					k+=l;
				}
				k=j;
				while (k-l>=1){
					val[k-l]=1;
					k-=l;
				}	
			}
		}
	}
	for (i=1; i<=pedras; i++){
		printf ("%d\n", val[i]);
	}
	return 0;
}