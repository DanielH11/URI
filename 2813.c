#include <stdio.h>
#include <string.h>

int main(){
    int i, N, casa=0, trab=0, comp=0, guar=0;
    char d[8], n[8];
	scanf("%d", &N);
    for (i=0; i<N; i++){
        scanf(" %s %s", &d, &n);
        if(strcmp(d, "chuva")==0){
            casa++;
            if (trab>0)
				trab--;
            else
				comp++;
        }
        if(strcmp(n, "chuva")==0){
            trab++;
            if (casa>0)
				casa--;
            else
				guar++;
        }
    }
    printf("%d %d\n", comp, guar);
    return 0;
}