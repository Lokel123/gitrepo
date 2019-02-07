/*
 * konwersje.cpp
 */


#include <iostream>
using namespace std;
void deck2any(int l, int p) {
    int reszty[8];
    do {
        reszty[i] = l%p;
        l = l/p;
        i++;
    } while (
    
    
    
}

int main(int argc, char **argv)
{
    int liczba = 0;
    int podstawa = 0;
    cout << "Podja liczbę: ";
    cin >> liczba;
    cout << " Podaj podstawę: ";
    cin >> podstawa;
	deck2any(liczba, podstawa);
	return 0;
}

