/*
 * cw_petle.cpp
 */


#include <iostream>
using namespace std;

void cw01() {
    int liczba;
    int suma = 0;
    while (suma <= 75) {
        cout << "Podaj liczbe: " << endl;
        cin >> liczba;
        suma = suma + liczba;
    }
    cout << suma << endl;
}

void cw02() {
    int n;
    int m;
    
    cout << "Podaj pierwszą liczbę: ";
    cin >> n;
    //while (n < 1) {
    //    cout << "Błąd";
    //    cout << "Podaj pierwszą liczbę: ";
    //}
    cout << "Podaj drugą liczbę: ";
    cin >> m;
    //while (n <= m) {
    //    cout << "Błąd";
    //    cout << "Podaj drugą liczbę: ";
    for (int liczba = n; liczba <= m; liczba++) {
        cout << liczba << " ";
}

}

void cw03() {
    int a;
    cout << "Podaj liczbę ostatniego kwadratu: ";
    cin >> a;
    int wynik = 1;
    for(int i  = 0;i <= a; i++);
        wynik = wynik * i;
}

int main(int argc, char **argv)
{
	//cw01();
    cw02();
	return 0;
}

