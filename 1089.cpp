#include <iostream>
using namespace std;

int main (){
	int n, v[10000], l, h, l0, h0, cont;
	cin >> n;
	while (n){
		cont=0;
		v[0]=0;
		l=0;
		h=0;
		cin >> v[0];
		for (int i=1; i<n; i++){
			cin >> v[i];
			if (v[i]>v[i-1]){
				if (l)
					cont++;
				l=0;
				h=1;
			}
			else if (v[i]<v[i-1]){
				if (h)
					cont++;
				l=1;
				h=0;
			}
			if (i==1){
				l0=l;
				h0=h;
			}
		}
		if (v[n-1]>v[0]){
			if (h){
				cont++;
				
			}
			if (h0)
				cont++;
		}
		if (v[n-1]<v[0]){
			if(l){
				cont++;
				
			}
			if (l0)
				cont++;
		}
		cout << cont << endl;
		cin >> n;	
	}
	return 0;
}