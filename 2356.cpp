#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char dnaBacteria[101], dnaResistencia[101];
    while (cin >> dnaBacteria){
        int j=0;
        cin >>  dnaResistencia;
        /*for (int i=0; (i<dnaBacteria.length()) && (j!=dnaResistencia.length()); i++){
            //cout << i << "a" << endl;
            if (dnaBacteria[i]==dnaResistencia[j]){
                //cout << j+1 << " " << dnaBacteria[i] << " - " << dnaResistencia[j] << endl;
                j++;
            }
            else{
                j=0;
                if (dnaBacteria[i]==dnaResistencia[j]){
                    //cout << j+1 << " " << dnaBacteria[i] << " - " << dnaResistencia[j] << endl;
                    j++;
                }
            }
        }*/
        if (!strstr(dnaBacteria, dnaResistencia))
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;
    }
    return 0;
}