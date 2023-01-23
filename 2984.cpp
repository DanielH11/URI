#include <iostream>
using namespace std;

int main (){
    string str;
    int comeco=0, fim=0, assunto=0;
    cin >> str;
    for (int i=0; i<str.length(); i++){
        if (str[i]=='(')
            assunto++;
        else if (assunto>0)
            assunto--;
    }
    /*if (comeco<fim)
        assunto=fim-comeco;
    else
        assunto=comeco-fim;*/
    if (!assunto)
        cout << "Partiu RU!" << endl;
    else
        cout << "Ainda temos " << assunto << " assunto(s) pendente(s)!" << endl;
}