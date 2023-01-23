#include <iostream>

using namespace std;

int buscacor(int m[200][200], int l, int c, int limh, int limv, int aux){
	if (0>l || l>=limh)
		return 0;
	if (0>c || c>=limv)
		return 0;
	if (m[l][c]==aux){
		m[l][c]=-1;
		return 1+buscacor(m, l+1, c, limh, limv, aux)
		+buscacor(m, l, c+1, limh, limv, aux)
		+buscacor(m, l-1, c, limh, limv, aux)
		+buscacor(m, l, c-1, limh, limv, aux);
	}
	return 0;
}

int busca(int m[200][200], int l, int c){
	int i, j, menor=40001, x;
	for (i=0; i<l; i++){
		for (j=0; j<c; j++){
			if (m[i][j]!=-1){
				x=buscacor (m, i, j, l, c, m[i][j]);
			}
			//cout << x << "\n";
			if (x<menor){
				menor=x;
				if (menor==1)
					return 1;
			}
		}
	}
	return menor;
}

int main (){
	int m[200][200], c, l, x;
	cin >> l >> c;
	for (int i=0; i<l; i++){
		for (int j=0; j<c; j++){
			cin >> m[i][j];	
		}	
	}
	x=busca (m, l, c);
	cout << x << endl;
	return 0;
}