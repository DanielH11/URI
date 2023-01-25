#include <stdio.h>

int main (){
	int a, b, c;
	while (scanf("%d", &a)!=EOF){
		scanf ("%d %d", &b, &c);
		if (a!=b && b==c)
			printf ("A\n");
		else if (b!=a && a==c)
			printf ("B\n");
		else if (c!=a && a==b)
			printf ("C\n");
		else
			printf ("*\n");
	}
	return 0;
}