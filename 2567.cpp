#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main (){
    int a[1000], n, som;
    while (scanf ("%d", &n)!=EOF){
        som=0;
        for (int i=0; i<n; i++)
            cin >> a[i];
        sort (a, a+n);
        for (int i=0; i<n/2; i++){
            som+=a[n-i-1]-a[i];
        }
        cout << som << "\n";
    }
    return 0;
}