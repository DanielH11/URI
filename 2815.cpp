#include <iostream>
#include <string>
using namespace std;

int main (){
    string frase, novaFrase;
    size_t tamanho;
    while(cin >> frase){
        string aux;
        aux.push_back(frase[0]);
        aux.push_back(frase[1]);
        if (frase.find(aux, 2)!=-1)
            novaFrase.append(frase, frase.rfind(aux), frase.length()-2);
        else
            novaFrase.append(frase);
        novaFrase.push_back(' ');
    }
    novaFrase.replace(novaFrase.length()-1, 1, "\n");
    cout << novaFrase;
    return 0;
}