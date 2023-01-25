#include <stdio.h>
#include <math.h>

int convert (long int n){
    int decimal=0;
    if (n>=10000000){
        n-=10000000;
        decimal+=pow (2, 7);
    }
    if (n>=1000000){
        n-=1000000;
        decimal+=pow (2, 6);
    }
    if (n>=100000){
        n-=100000;
        decimal+=pow (2, 5);
    }
    if (n>=10000){
        n-=10000;
        decimal+=pow (2, 4);
    }
    if (n>=1000){
        n-=1000;
        decimal+=pow (2, 3);
    }
    if (n>=100){
        n-=100;
        decimal+=pow (2, 2);
    }
    if (n>=10){
        n-=10;
        decimal+=pow (2, 1);
    }
    if (n){
        decimal+=1;
    }
    return decimal;
}
int main (){
    int m[100000], aux, i, j=0, k;
    long int n;
    while (scanf ("%d", &n)!=EOF){
        for (i=0; i<n; i++){
            scanf ("%ld", &aux);
            m[i]=convert(aux);
            printf ("%c", m[i]);
        }
        printf ("\n");
        j++;
    }
    return 0;
}