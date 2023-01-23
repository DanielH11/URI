#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int h, m;
	cout << fixed;
	cout << setfill('0');
	cout << setw(2);
	while (cin >> h >> m){
		cout << setfill ('0') << setw(2) << h/30 << ":" << setfill ('0') << setw(2) << m/6 << endl;
	}
	return 0;
}