#include <iostream>
#include <string>
using namespace std;

int main (){
    int n, a=0;
    string frase;
    cin >> n;
    getline(cin, frase);
    for (int i=0; i<n; i++){
        string fraseNova, subfrase;
        getline(cin, frase);
        int j=0, flag;
        int metade=frase.length()/2+1, cont=0;
        if (frase.length()%2==0)
            flag=1;
        else
            flag=0;
        for (int k=frase.length()-1; k>=0; k--){
            if(metade && k+flag<=frase.length()/2){
                cont=-1;
                metade--;
            }
            else if ( k+flag<=frase.length()/2){
                cont=0;
                metade--;
            }
            if ((frase[k]>=65 && frase[k]<=90) || (frase[k]>=97 && frase[k]<=122))
                fraseNova.push_back(frase[k]+3+cont);
            else
				fraseNova.push_back(frase[k]+cont);
        }
        cout << fraseNova << endl;
    }
    return 0;
}