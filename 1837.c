#include <stdio.h>
#include <stdlib.h>

int main (){
	int a, b, flag=0, i, r;
	scanf ("%d %d", &a, &b);
	if (a%b>=0)
		printf ("%d %d\n", a/b, a%b);
	else{
		if (b>0){
			for (i=-1; !flag; i--){
				r=a-b*i;
				if (0<r && r<abs(b)){
					printf ("%d %d\n", i, r);
					flag=1;
				}
			}
		}
		else{
			for (i=1; !flag; i++){
				r=a-b*i;
				if (0<r && r<abs(b)){
					printf ("%d %d\n", i, r);
					flag=1;
				}
			}
		}
	}
	return 0;
}