#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void male(string name, int n);
void female(string name, int n);

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

    int n = 2;
    cout << "Įveskite norimą rėmelio plotį (nutylėta reikšmė yra 2): " << flush;
    try {
        cin >> n;
        if(n == 0)
            n = 2;
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
            male(name, n);
            break;
            
        case '2':
            female(name, n);
            break;
        default:
            cout << "Įvyko klaida" << endl;
            return 0;
    }
    return 0;
}

void male(string name, int n) {
    string s = string(11 + name.size() + 2, '*');
    cout << s << endl;

    for(int i = 0; i < n/2; i++)
        cout << "*" + string(s.size()-2, ' ') + "*" << endl;

    cout << "* Sveikas, " + name + " *" << endl;

    for(int i = 0; i < (n/2 + n%2); i++)
        cout << "*" + string(s.size()-2, ' ') + "*" << endl;

    cout << s << endl;
}

void female(string name, int n) {

    string s = string(10 + name.size() + 2, '*');
    cout << s << endl;

    cout << "*" + string(s.size()-2, ' ') + "*" << endl;

    cout << "* Sveika, " + name + " *" << endl;

    cout << "*" + string(s.size()-2, ' ') + "*" << endl;

    cout << s << endl;

}
