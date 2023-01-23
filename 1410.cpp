#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main (){
	int a, d, b[10000], c[10000];
	cin >> a >> d;
	while (a!=0 && d!=0){
		for (int i=0; i<a; i++){
			cin >> b[i];	
		}
		for (int i=0; i<d; i++){
			cin >> c[i];
		}
		sort (b, b+a);
		sort (c, c+d);
		if (b[0]<=c[1]){
			if (b[0]==c[1])
				cout << "N" << endl;
			else
				cout << "Y" << endl;
		}
		else
			cout << "N" << endl;
		cin >> a >> d;
	}
	return 0;
}