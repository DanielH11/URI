#include <iostream>
using namespace std;

long long int pow(long long int base, long long int expoente){
    long long int produto=1;
    while (expoente){
        produto*=base;
        expoente--;
    }
    return produto;
}

int main (){
    long long int m, n, i;
    while(cin >> m >> n){
        long long int saida=0;
        string mBin, nBin, fBin;
        if (!m)
            mBin.insert(0, "0");
        while (m){
            if (m%2)
                mBin.insert(0, "1");
            else
                mBin.insert(0, "0");
            m/=2;
        }
        if (!n)
            nBin.insert(0, "0");
        while (n){
            if (n%2)
                nBin.insert(0, "1");
            else
                nBin.insert(0, "0");
            n/=2;
        }
        if (mBin.length()>nBin.length()){
            long long int diferenca=mBin.length()-nBin.length();
            i=mBin.length();
            while(diferenca){
                nBin.insert(0, "0");
                diferenca--;
            }
        }
        else{
            long long int diferenca=nBin.length()-mBin.length();
            i=nBin.length();
            while(diferenca){
                mBin.insert(0, "0");
                diferenca--;
            }
        }
        for (long long int j=0; j<i; j++){
            if (mBin[j]!=nBin[j])
                fBin.append("1");
            else
                fBin.append("0");
        }
        long long int k=0;
        for (long long int j=i-1; j>=0; j--){
            if (fBin[k]=='1')
                saida+=pow(2, j);
            k++;
        }
        cout << saida << endl;
    }
    return 0;
}