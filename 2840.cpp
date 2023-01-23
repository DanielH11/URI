#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int raio, gas;
    double v;
    cin >> raio >> gas;
    v=(4*3.1415*pow(raio, 3)/3);
    cout << (int)(gas/v) << endl;
    return 0;
}