#include <iostream>
using namespace std;

struct runas{
	char r;
	int v;
};

int main (){
	int n, g, x, som=0;
	char c;
	struct runas runa[100];
	cin >> n >> g;
	for (int i=0; i<n; i++)
		cin >> runa[i].r >> runa[i].v;
	cin >> x;
	for (int i=0; i<x; i++){
		int j=0;
		cin >> c;
		while (c!=runa[j].r)
			j++;
		som+=runa[j].v;
	}
	cout << som << endl;
	if (som>=g)
		cout << "You shall pass!" << endl;
	else
		cout << "My precioooous" << endl;
	return 0;
}