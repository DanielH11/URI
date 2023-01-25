#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sorts (char nome[1000][81], int n){
    int i, j;
    char aux[81];
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (strcmp(nome[i], nome[j])>0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }
}

int main (){
    int i=0, j, k;
    char nome[1000][81], aux[81];;
    while (scanf("%s ", &nome[i])!=EOF){
        for (k=0; k<sizeof(nome[i]); k++)
            toupper(nome[i][k]);
        for (k=0; k<i; k++){
            for (j=0; j<i; j++){
                if (strcmp(nome[k], nome[j])>0){
                    strcpy(aux, nome[k]);
                    strcpy(nome[k], nome[j]);
                    strcpy(nome[j], aux);
                }
            }
        }
        i++;
    }
    for (j=0; j<i; j++)
        printf ("%s\n", nome[j]);
    return 0;
}