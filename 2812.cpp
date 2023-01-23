#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
	int k, n, o, x;
	cin >> n;
	for (int i=0; i<n; i++){
		int v[100];
		cin >> o;
		k=0;
		for (int j=0; j<o; j++){
			cin >> x;
			if (x%2){
				v[k]=x;
				k++;
			}
			else if (x==1){
				v[k]=x;
				k++;
			}
		}
		sort(v, v+k);
		for (int j=0; j<(k+1)/2; j++){
				cout << v[k-j-1];
				if ((!j<(k+1)/2 && k-j-1!=j)||k==2)
					cout << " " ;
				if (k-j-1!=j){
					cout << v[j];
					if (j+1<(k+1)/2)
						cout << " ";
				}
		}
		cout << endl;
	}
	return 0;
}