#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct pre{
    int v, id;
};

bool val (pre a, pre b){
    if (a.v != b.v)
        return a.v > b.v;
    return a.id < b.id;
}

bool ids (pre a, pre b){
    return a.id < b.id;
}

int main (){
    int n, m, o, d, a, l, c;
    struct pre presente[100000];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> m >> o;
        for (int j=0; j<m; j++){
            cin >> d >> a >> l >> c;
            presente[j].v=a*l*c;
            presente[j].id=d;
        }
        sort (presente, presente+m, val);
        sort (presente, presente+o, ids);
        if (o==1){
            for (int j=0; j<o; j++)
                cout << presente[j].id << endl;
        }
        else{
            for (int j=0; j<o-1; j++){
                cout << presente[j].id << " ";
            }
            cout << presente[o-1].id << endl;
        }
    }
    return 0;
}