#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void male(string name);
void female(string name);

//Karolis Kucinskas ISI 1 gr. 1 pgr.

int main() {

    string name;
    cout << "Iveskite savo varda:  " << flush;
    try {
        cin >> name;
    } catch(char* e) {
        cout << "Ivyko klaida!" << endl;
        return 0;
    }

    cout << "Pasirinkite savo lytį (Įveskite atitinkamą skaičių): " << endl;
    cout << "1. Vyras \n2. Moteris   " << flush;
    char s;
    try {
        cin >> s;
    } catch (char* e) {
        cout << "Ivyko klaida!" << endl;
        return 0;
    }

    cout << endl;

    switch(s) {
        case '1':
            male(name);
            break;
            
        case '2':
            female(name);
            break;
        default:
            cout << "Įvyko klaida" << endl;
            return 0;
    }
    return 0;
}

void male(string name) {
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
}

void female(string name) {
    string pirma = string(10 + name.size() + 2, '*');
    cout << pirma << endl;

    string antra = "*" + string(pirma.size()-2, ' ') + "*";
    cout << antra << endl;

    string trecia = "* Sveika, " + name + " *";
    cout << trecia << endl;

    string ketvirta = antra;
    cout << ketvirta << endl;

    string penkta = pirma;
    cout << penkta << endl;
}
