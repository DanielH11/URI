#include <iostream>
using namespace std;

int main (){
    int n;
    string sheldon, raj;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> sheldon >> raj;
        if (!sheldon.compare("papel") || !raj.compare("papel")){
            if (!sheldon.compare("pedra"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; 
            else if (!raj.compare("pedra"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else if (!sheldon.compare("Spock"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; 
            else if (!raj.compare("Spock"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else if (!sheldon.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl; 
            else if (!raj.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            else if (!sheldon.compare("tesoura"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl; 
            else if (!raj.compare("tesoura"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            else
                cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
        else if (!sheldon.compare("tesoura") || !raj.compare("tesoura")){
            if (!sheldon.compare("pedra"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl; 
            else if (!raj.compare("pedra"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            else if (!sheldon.compare("Spock"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl; 
            else if (!raj.compare("Spock"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            else if (!sheldon.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; 
            else if (!raj.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
        else if (!sheldon.compare("pedra") || !raj.compare("pedra")){
            if (!sheldon.compare("Spock"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl; 
            else if (!raj.compare("Spock"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            else if (!sheldon.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; 
            else if (!raj.compare("lagarto"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
        else if (!sheldon.compare("lagarto") || !raj.compare("lagarto")){
            if (!sheldon.compare("Spock"))
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; 
            else if (!raj.compare("Spock"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
        else
            cout << "Caso #" << i+1 << ": De novo!" << endl;
    }
    return 0;
}