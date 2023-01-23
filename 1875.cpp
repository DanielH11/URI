#include <iostream>
using namespace std;

int main (){
    int n, N;
    char a, b;
    cin >> N;
    for (int i=0; i<N; i++){
        int G=0, R=0, B=0;
        cin >> n;
        for (int j=0; j<n; j++){
            cin >> a >> b;
            if (a=='G'){
                if (b=='B')
                    G+=2;
                else
                    G++;
            }
            else if (a=='B'){
                if (b=='R')
                    B+=2;
                else
                    B++;
            }
            else if (a=='R'){
                if (b=='G')
                    R+=2;
                else
                    R++;
            }
        }
        if (B==R && R==G)
            cout << "trempate" << endl;
        
        else if (G>R && G>B)
            cout << "green" << endl;
        else if (R>G && R>B)
            cout << "red" << endl;
        else if (B>G && B>R)
            cout << "blue" << endl;
        else if (B==R || R==G || G==B){
            cout << "empate" << endl;
        }
    }
    return 0;
}