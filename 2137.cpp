#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    char cod[1000][5];
    while (cin >> n){
        for (int i=0; i<n; i++){
            cin >> cod[i];
        }
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (strcmp(cod[i], cod[j])<0 && i!=j){
                    swap (cod[i], cod[j]);
                }
            }
        }
        for (int i=0; i<n; i++){
            cout << cod[i]<< endl;
        }
    }
    return 0;
}