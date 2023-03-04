#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    if (b == 0) {
        cout << "Błąd: Nie można dzielić przez zero." << endl;
        return 1;
    }
    c = a / b;
    cout << "Wynik dzielenia a przez b to: " << c << endl;
    return 0;
}