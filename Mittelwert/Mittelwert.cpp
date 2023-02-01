// Mittelwert.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    float zahl1, zahl2;
    cin >> zahl1 >> zahl2;
    float mittelwert = (zahl1 + zahl2) / 2;
    cout << "Der Mittelwert von " << zahl1 << " und " << zahl2 << " ist " << mittelwert << endl;
    return 0;
}