/*
 * sortowanie.cpp
 */


#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    srand(time(NULL)); //inicjacja generatora liczb pseudolosowych
	void wypelnij(int tab[], int rozmiar){
        cout << " Wprowadż " << rozmiar << " liczb: " << endl;
        for(int i = 0; i<rozmiar; i++) {
            tab[i] = rand() % 101; // liczby od 0 do 100
            }
}

void drukuj(int tab[], int rozmiar){
        for(int i = 0; i<rozmiar; i++) {
            cout << tab[i] << " ";
            }
}
    
    
    
	return 0;
}

