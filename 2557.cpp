#include <iostream>
#include <math.h>
using namespace std;

int chartoint(char number){
    switch (number){
        case '0': 
            return 0;
        case '1': 
            return 1;
        case '2': 
            return 2;
        case '3': 
            return 3;
        case '4': 
            return 4;
        case '5': 
            return 5;
        case '6': 
            return 6;
        case '7': 
            return 7;
        case '8': 
            return 8;
        case '9': 
            return 9;
    }
}

int main (){
    string equacao;
    int a, b, i;
    char x;
    while(cin >> equacao){
        if (equacao[0]>='A' && equacao[0]<='Z'){
            int j=0;
            b=0;
            i=equacao.length()-1;
            while (equacao[i]>='0' && equacao[i]<='9'){
                b+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            i--;
            a=0;
            j=0;
            while (equacao[i]>='0' && equacao[i]<='9'){
                a+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            cout << b-a << endl;
        }
        else if (equacao[equacao.length()-1]>='A' && equacao[equacao.length()-1]<='Z'){
            int j=0;
            b=0;
            i=equacao.length()-3;
            while (equacao[i]>='0' && equacao[i]<='9'){
                b+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            i--;
            a=0;
            j=0;
            while (equacao[i]>='0' && equacao[i]<='9'){
                a+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            cout << b+a << endl;
        }
        else{
            int j=0;
            b=0;
            i=equacao.length()-1;
            while (equacao[i]>='0' && equacao[i]<='9'){
                b+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            i-=3;
            a=0;
            j=0;
            while (equacao[i]>='0' && equacao[i]<='9'){
                a+=pow(10, j)*chartoint(equacao[i]);
                j++;
                i--;
            }
            cout << b-a << endl;
        }
    }
    return 0;
}