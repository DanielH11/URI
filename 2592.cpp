#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, m[10000], n, sort;
    cin >> n;
    while (n){
        j=0;
        do{
            sort =1;
            for (i=0; i<n; i++){
               cin >> m[i];
               if ( i!=0 && m[i] < m[i-1]){
                sort = 0;
               }
            }
            j++;
        }while (!sort);
        cout << j << "\n";
        cin >> n;
    }
    cout << "\n";
    return 0;
}   