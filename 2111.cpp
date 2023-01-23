#include <iostream>
using namespace std;

int pow(int a, int b){
    int pro=1;
    if (!b)
        return 1;
    while (b){
        pro*=a;
        b--;
    }
    return pro;
}

int main (){
    int n;
    while (cin >> n){
        int m=n;
        for(int i=8; i>-1; i--){
            if (m>=5*pow(10, i)){
                cout << "0";
            }
            else
                cout << "1";
            m=m%pow(10, i);
        }
        m=n;
        cout << endl;
        for(int i=8; i>-1; i--){
            if (m>=5*pow(10, i)){
                cout << "1";
            }
            else
                cout << "0";
            m=m%(int)(1*pow(10, i));
        }
        m=n;
        cout << endl << "---------" << endl;
        for(int i=8; i>-1; i--){
            if ((int)(m/(1*pow(10, i)))%5!=0){
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
        for(int i=8; i>-1; i--){
            if ((int)(m/(1*pow(10, i)))%5-1!=0){
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
        for(int i=8; i>-1; i--){
            if ((int)(m/(1*pow(10, i)))%5-2!=0){
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
        for(int i=8; i>-1; i--){
            if ((int)(m/(1*pow(10, i)))%5-3!=0){
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
        for(int i=8; i>-1; i--){
            if ((int)(m/(1*pow(10, i)))%5-4!=0){
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl << endl;
    }
    return 0;
}