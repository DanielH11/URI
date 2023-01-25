#include <iostream>
using namespace std;

int main (){
	int i, m[1001], n, dois=0, tres=0, quat=0, cinc=0;
    cin >> n;
	for (i=0; i<n; i++){
		cin >> m[i];
	}
	for (i=0; i<n; i++){
		if (m[i]%2==0){
            dois+=1;
        }
        if (m[i]%3==0){
            tres+=1;
        }
        if (m[i]%4==0){
            quat+=1;
        }
        if (m[i]%5==0){
            cinc+=1;
        }
	}
	cout << dois << " Multiplo(s) de 2\n";
	cout << tres << " Multiplo(s) de 3\n";
    cout << quat << " Multiplo(s) de 4\n";
    cout << cinc << " Multiplo(s) de 5\n";
    return 0;
}