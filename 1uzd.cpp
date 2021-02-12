#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Karolis Kucinskas ISI 1 gr. 1 pgr. v0.1

int main() {

    string name;
    cout << "Iveskite savo varda:  " << flush;
    try {
        cin >> name;
    } catch(char* e) {
        cout << "Ivyko klaida!" << endl;
        return 0;
    }

    cout << endl;

    string pirma = string(11 + name.size() + 2, '*');
    cout << pirma << endl;

    string antra = "*" + string(pirma.size()-2, ' ') + "*";
    cout << antra << endl;

    string trecia = "* Sveikas, " + name + " *";
    cout << trecia << endl;

    string ketvirta = antra;
    cout << ketvirta << endl;

    string penkta = pirma;
    cout << penkta << endl;

    return 0;
}