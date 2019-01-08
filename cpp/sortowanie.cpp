/*
 * sortowanie.cpp
 */


#include <iostream>
#include <cstdlib>
using namespace std;


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

void zamien1(int &a, int &b) {
    //cout << a << " " << b << endl;
    int tmp = a;
    a = b;
    b = tmp;
    //cout << a << " " << b << endl;
}

void sort_bubble(int tab[], int n) {
    for (int j = n-1; j > 0; j--) {
        
        for (int i = 0; i < j, i++) {
            if (tab[i] > tab[i+1]);
                zamien1(tab[i], tab[i+1]);
                
        }
    }    
}
void sort_selection(int tab[],int n){
    int i, j, k;
    for (i = 0; i < n, i++) {
        k = i; //indeks najmniejszego elementu
        for (j = i+1,j < n,j++){
            if (tab[j] < tab[k])
                k = j;
        }
        zamien1(tab[i], tab[k]);
    }
    
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
int main(int argc, char **argv)
{

    int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    cout << endl;
    drukuj(tab, roz);
    //sort_bubble(tab, roz);
    //sort_selection(tab, roz);
    sort_insert(tab, roz);
    drukuj(tab, roz);
    cout << endl;
    
	return 0;
}

