/*
 * wyszukaj.cpp
 */


#include <iostream>

void wypelnij(int tab[], int rozmiar){
    srand(time(NULL)); //inicjacja generatora liczb pseudolosowych
    for(int i = 0; i<rozmiar; i++) {
        tab[i] = rand() % 101; // liczby od 0 do 100
        //cin >> tab[i];
    }
}

void drukuj(int tab[], int rozmiar){
        for(int i = 0; i<rozmiar; i++) {
            cout << tab[i] << " ";
            }
            cout << endl << endl;
}

void sort_insert(int tab[],int n){
    int i, el, k;
    for (i = 1; i < n, i++) {
        el = tab[i];
        k = i-1; //indeks najmniejszego elementu
        while (k => 0 && tab[k]>el ) {
            tab[k+1] = tab[k];
            k--;
        }
        tab[k+1] = el;
    }
    
}

int szukaj_lin(int tab, int n, int szuk) {
    for (int i = 0; i < n; i++) {
    if (tab[i] == szuk)
        return i;
    else
        return -1;
        
        
    }
}

int wyszukaj_bin(int tab[], int n, int szuk) {
    
    
}

int main(int argc, char **argv)
{
    int n = 20;
	int tab[n];
    wypelnij(tab, n);
    drukuj(tab, n);
    int szuk = 0;
    cout << "Podaj szukany element:"; cin >> szuk;
    int indeks;
    if (szukaj_lin(tab, n, szuk))
        cout << "Znaleziono";
    else
        cout << "Nie znaleziono";
    
	return 0;
}

