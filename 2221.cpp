#include <iostream>
using namespace std;

int main (){
    int n, bonus, aa, da, la, ab, db, lb;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> bonus;
        cin >> aa >> da >> la;
        cin >> ab >> db >> lb;
        if (la%2==0)
            aa+=2*bonus;
        if (lb%2==0)
            ab+=2*bonus;
            cout << (aa+da)/2 << "\n" << (ab+db)/2 << "\n";
        if ((aa+da)/2>(ab+db)/2)
            cout << "Dabriel\n";
        else if ((aa+da)/2<(ab+db)/2)
            cout << "Guarte\n";
        else
            cout << "Empate\n";
    }
    return 0;
}