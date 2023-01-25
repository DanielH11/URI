#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, n, dir;
	char x;
	scanf ("%d", &n);
	while (n){
		dir=0;
		scanf ("%c", &x);
		for (i=0; i<n; i++){
			scanf ("%c", &x);
			if (x=='E')
				dir = (dir - 1 + 4) % 4;
			else if (x=='D')
				dir = (dir + 1) % 4;
		}
		if (dir==0)
			printf("N\n");
		else if (dir==1)
			printf("L\n");
		else if (dir==2)
			printf("S\n");
		else if (dir==3)
			printf("O\n");
		scanf ("%d", &n);
	}
	return 0;
}