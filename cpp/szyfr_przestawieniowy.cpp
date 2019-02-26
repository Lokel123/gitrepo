/*
 * szyfr_przestawieniowy.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100


void drukuj(char tb[]){
        
    }
}

void szyfruj(char tb[], int klucz) {
    int ile = strlen(tb);
    int reszta;
    int i = 0;
    cout << ile << endl;
    reszta = ile % klucz;
    if (reszta > 0)
        for(i = 0; i < klucz-reszta; i++) {
            tb[ile+i] = '.';
        }
    tb[ile+i]= '\0';
    drukuj(tb);
    ile = strlen(tb);
    cout << endl;
    for(i= 0; i < kulcz; i++) {
        for(int j=i; j<ile; j+=klucz) {
            cout << tb[j];
        }
    }
}
    drukuj(tab);
    while(tb[i] != '\0') {
        cout << tb[i];
        i++;
    }
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

