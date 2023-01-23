#include <iostream>
using namespace std;

int main (){
    int n, x;
    while (cin >> n){
        int flag=1;
        for (int i=0; i<n; i++){
            cin >> x;
            if (x>=20)
                flag=3;
            else if(x>=10 && flag!=3)
                flag=2;
        }
        cout << flag << endl;
    }
    return 0;
}