#include <iostream>
using namespace std;

int main (){
    int n, a, b, flag=0; 
    double garrafa, cuia;
    string nome[11];
    cin >> n >> garrafa >> cuia;
    for (int i=0; i<n; i++){
        cin >> nome[i];
    }
    while (garrafa>0){
        garrafa-=cuia;
        flag++;
    }
    cout << nome[(flag-1)%n] << " " << garrafa+cuia << endl; 

    return 0;
}