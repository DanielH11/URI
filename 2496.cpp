#include <iostream>
using namespace std;

int main (){
    int N;
    char ch;
    string str;
    cin >> N;
    while (N){
        int n, cont=0;
        cin >> n >> str;
        /*for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                if (str[i]>str[j]){
                    cont++;
                    ch=str[i];
                    str[i]=str[j];
                    str[j]=str[i];
                }
            }
        }*/
        for (int i=0; i<n; i++)
            if (str[i]!=i+65)
                cont++;
        if (cont==2)
            cout << "There are the chance." << endl;
        else
            cout << "There aren't the chance." << endl;
        N--;
    }
}