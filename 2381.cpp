#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, b;
    string nome[100];
    cin >> n >> b;
    for (int i=0; i<n; i++)
        cin >> nome[i];
    sort (nome, nome+n);
    cout << nome[b-1] << "\n";
}