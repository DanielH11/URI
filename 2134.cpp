#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct registro{
    string nome;
    int nota;
};

bool ordenar (struct registro reg, struct registro reg2){
    if (reg.nota!=reg2.nota)
        return reg.nota>reg2.nota;
    return reg.nome<reg2.nome;
}

int main (){
    int instancia, N;
    for (instancia=1; cin >> N; instancia++){
        struct registro reg[100];
        for (int i=0; i<N; i++)
            cin >> reg[i].nome >> reg[i].nota;
        sort (reg, reg+N, ordenar);
        cout << "Instancia " << instancia << endl << reg[N-1].nome << endl << endl;
    }
    return 0;
}