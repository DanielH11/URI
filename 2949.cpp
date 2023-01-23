#include <iostream>
#include <string.h>
using namespace std;

int main (){
	int n, x=0, h=0, e=0, a=0, m=0;
	char nome[21], letra, l;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> nome >> l;
		if (l=='X')
			x++;
		else if (l=='H')
			h++;
		else if (l=='E')
			e++;
		else if (l=='A')
			a++;
		else if (l=='M')
			m++;
	}
	cout << x << " Hobbit(s)" << endl;
	cout << h << " Humano(s)" << endl;
	cout << e << " Elfo(s)" << endl;
	cout << a << " Anao(oes)" << endl;
	cout << m << " Mago(s)" << endl;
	return 0;
}