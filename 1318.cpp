#include <iostream>
using namespace std;

int main (){
    int n, m, x, v[10000], cont;
    cin >> n >> m;
    do{
        cont=0;
        for (int i=0; i<n; i++)
            v[i]=0; 
        for (int i=0; i<m; i++){
            cin >> x;
            v[x]++;
            if (v[x]==2){
                cont++;
            }
        }
        cout << cont << endl;
        cin >> n >> m;
    }while (n && m);
    return 0;
}