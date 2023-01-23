#include <iostream>
using namespace std;

int raiz (double area){
    int i=1;
    while (i*i<area)
        i++;
    if (i*i==area)
        return i;
    else
        return i-1;
}

int main (){
    int a, b;
    double c;
    while (cin >> a >> b >> c){
        int area=a*b;
        c=100/c;
        cout << raiz(area*c) << endl;
    }
    return 0;
}