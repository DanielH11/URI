#include <stdio.h>
#include <string.h>

int main (){
    int n;
    char cod[1000][5], aux[5];
    while (scanf ("%d", &n)!=NULL){
        cod[1000][5]=NULL;
        for (int i=0; i<n; i++){
            scanf ("%s", &cod[i]);
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (strcmp(cod[i], cod[j])>0){
                    aux=cod[i];
                    cod[i]=cod[j];
                    cod[j]=cod[i];
                }
            }
        }
        for (int i=0; i<n; i++){
            printf ("%s\n", &cod[i]);
        }
    }
    return 0;
}