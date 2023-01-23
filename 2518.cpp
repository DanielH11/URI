#include <iostream>
#include<bits/stdc++.h>
#include <math.h>
using namespace std;

double pitagoras (int H, int C){
    return sqrt(H*H+C*C);
}

int main (){
    int n;
    while (cin >> n){
        int H, C, L;
        double lado;
        cin >> H >> C >> L;
        lado=pitagoras(H, C);
        cout << fixed << setprecision (4) << lado*L*n/10000 << endl;
    }
}