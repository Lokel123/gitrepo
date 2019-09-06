*
 * warunek.cpp
#include <iostream>

using namespace std;

void wypelnij(int tab[], int rozmiar){
        cout << " Wprowadż " << rozmiar << " liczb: " << endl;
        for(int i = 0; i<rozmiar; i++) {
            cin >> tab[i];
        }
}

void drukuj(int tab[], int rozmiar){
        for(int i = 0; i<rozmiar; i++) {
            cout << tab[i] << " ";
            }
}

void minmax(int tab[], int rozmiar){
        int minimum = tab[0];
        int maximum = tab[0];
        for(int i = 1; i<rozmiar; i++) {
            if (minimum > tab[i])
                minimum = tab[i];
            if (maximum < tab[i])
                maximum = tab[i];
        
            }
        cout << "Największa liczba: " << maximum << endl;
        cout << "Najmniejsza liczba: " << minimum << endl; //cout - drukuj
}

int main(int argc, char **argv)
{
    const int rozmiar = 5;
	int tab[rozmiar];
    wypelnij(tab, rozmiar);
    drukuj(tab, rozmiar);
    cout << endl;
    minmax(tab, rozmiar);
	return 0;
}

