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
    for (int i = 0; i < n; i++) 
        if (tab[i] == szuk)
            return i;
    return -1;
        
        
}

int szukaj_bin_it(int tab[], int n, int szuk) {
    int p, k, s; // p poczatek, k koniec, s srodek
    p = 0;
    k = n - 1;
    while (p <= k) {
        s = (p + k)/2;
        if (tab[s] == szuk) return s;
        else if (szuk < tab[s])
        k = s-1;
        else p = s + 1;
    }
    return -1;
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
    sort_insert(tab, n);
    drukuj(tab, n);
    indeks = szukaj_bin_it(tab, n, szuk);
    if (szukaj_lin(tab, n, szuk))
        cout << "Znaleziono";
    else
        cout << "Nie znaleziono";
    
	return 0;
}

