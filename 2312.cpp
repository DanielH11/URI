#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct med{
    int our, pra, bro;
    char nome[50];
};

int main (){
    int n;
    char aux[50];
    struct med pais[500];
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> pais[i].nome >> pais[i].our >> pais[i].pra >> pais[i].bro;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (pais[i].our>pais[j].our){
                swap (pais[i], pais[j]);
            }
            else if (pais[i].our==pais[j].our && i!=j){
                if (pais[i].pra>pais[j].pra){
                    swap (pais[i], pais[j]);
                }
                else if (pais[i].pra==pais[j].pra && i!=j){
                    if (pais[i].bro>pais[j].bro){
                        swap (pais[i], pais[j]);
                    }
                    else if (pais[i].bro==pais[j].bro && i!=j){
                        if (strcmp(pais[i].nome, pais[j].nome)<0){
                            swap(pais[i], pais[j]);
                        }
                    }
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << pais[i].nome << " " << pais[i].our << " " <<pais[i].pra << " " << pais[i].bro << endl;
    }
    return 0;
}