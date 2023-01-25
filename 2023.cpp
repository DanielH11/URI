#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool lowe (string a, string b){
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    return b>a;
}

int main (){
    ios_base::sync_with_stdio(false);
 	cin.tie(NULL);
    int i=0, n;
    string nome[1001];
    while (getline(cin, nome[i])){
        i++;
    }
    sort (nome, nome+i, lowe);
    cout << nome[i-1] << endl;
    return 0;
}