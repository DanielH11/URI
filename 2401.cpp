#include <iostream>
using namespace std;

int main (){
	int n, a, b;
	double saida=1;
	char operador;
	cin >> n;
	while (n){
		long double x;
		cin >> x >> operador;
		if (operador=='*'){
			saida*=x;
		}
		else
			saida/=x;
		n--;
	}
	/*if ((int)saida%2){
		a=saida/2;	
		b=a;
		a++;
	}
	else{
		a=saida/2;	
		b=a;
	}
	cout << a+b << endl;*/
    printf ("%.0lf\n", saida);
}