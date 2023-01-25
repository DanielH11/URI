#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int j, n, c[1000], d[1000], produto;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> c[i] >> d[i];
    }
    for (int i=0; i<n; i++){
    	int somc=1;
    	int somd=1;
    	j=c[i];
    	while (j--){
    		somc*=26;
		}
		j=d[i];
		while (j--){
			somd*=10;
		}
		if (somd*somc==1){
			cout << 0 << "\n";
		}
        else {
        	cout << somd*somc << "\n";
		}
	}
    return 0;
}