#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main (){
    int m, n, o[1000], som;
    while (scanf ("%d", &m)!=EOF){
        cin >> n;
        som=0;
        for (int i=0; i<m; i++)
            cin >> o[i];
        sort (o+0, o+m);
        for (int i=n; i>0; i--){
            som+=o[m-1];
            m--;
        }
        cout << som << "\n";
    }
    return 0;
}