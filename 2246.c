#include <stdio.h>

int main (){
	int h, i, l, m[40000], menor=0, x;
	scanf ("%d %d", &h, &l);
	m[menor]=40001;
	for (i=1; i<=40000; i++)
		m[i]=0;
	for (i=0; i<=h*l; i++){
		scanf ("%d", &x);
		m[x]++;
	}
	for (i=0; i<=h*l; i++){
		if (m[i]<m[menor] && m[i]!=0)
			menor=i;
	}
	printf ("%d\n", m[menor]);
	return 0;
}