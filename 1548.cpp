#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
	int i, j, n, m, p[1000], q[1000], cont;
	cin >> n;
	for (i=0; i<n; i++){
		cont=0;
		cin >> m;
		for (j=0; j<m; j++){
			cin >> p[j];
			q[j]=p[j];
		}
		sort (q, q+m, greater<int>());
		for (j=0; j<m; j++){
			if (q[j]==p[j])
				cont++;
		}
		memset(q, 0, sizeof (q));
		cout << cont << endl;
	}
	return 0;
}