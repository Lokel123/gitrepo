/*
 * szyfr_przestawieniowy.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100

void szyfruj(char tb[], int klucz) {
    int ile = strlen(tb);
    int reszta;
    cout << ile <<endl;
    reszta = ile % klucz;
    cout << reszta << endl;
    
    
    
    
}

int main(int argc, char **argv)
{
    char tekst[MAKS];
    int klucz = 0;
    cout << "podaj tekst: ";
    cin.getline(tekst, MAKS);
    cout << "podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);
	return 0;
}

