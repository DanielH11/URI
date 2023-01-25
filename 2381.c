#include <stdio.h>
#include <string.h>

void bubblesort(char **nome, int n){
	int flag;
    char aux[21];
	for (int i=0; i<n-1; i++){
		flag=1;
		for (int j=0; j<n-i-1; j++){
			if (strcmp(nome[i], nome[i+1])>0){
                strcpy(aux, nome[i]);
                strcpy (nome[i], nome[i+1]);
                strcpy (nome[i+1], aux);
            }
		}
		if (flag)
			return;
	}
}

int main (){
    int n, b;
    char nome[100][21], aux[21];
    scanf ("%d %d", &n, &b);
    for (int i=0; i<n; i++){
        scanf ("%s", &nome[i]);
    }
    for (int i=0; i<n; i++){
        printf ("%s\n", nome[i]);
    }
	bubblesort (nome, n);
    printf ("%s\n", nome[b-1]);
}
