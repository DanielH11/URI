#include <iostream>
using namespace std;

int main (){
    int a, b, c, flag=0;
    cin >> a >> b >> c;
    if (a+b==c)
        flag=1;
    else if (a+c==b)
        flag=1;
    else if (b+c==a)
        flag=1;
    else if (a==b || b==c || a==c)
        flag=1;
    if (flag)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}