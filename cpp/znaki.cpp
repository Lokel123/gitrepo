/*
 * znaki.cpp
 */


#include <iostream>
using namespace std;

int zlicz(char tab[]) {
    int i = 0;
    int ile = 0;
    while (tab[i] != '\0'){
      i++;
      ile++;
    } 
    return i;
}

void drukuj(char tab[], int rozmiar){
        for(int i = 0; i<rozmiar; i++) {
            cout << tab[i] << " ";
            }
}

void liczznaki(char tab[], int rozmiar){
    int spacja = 0;
    int iterpunkcja = 0;
    for(int i = 0; i<rozmiar; i++) {
        if (tab[i] == ' ') spacje++;
        else if (tab[i] == ' . '|| tab[i] == ',')
        cout << tab[i] << " ";
            }
}

int main(int argc, char **argv)
{
	const int rozmiar = 20;
    char tab[rozmiar];
    cout << "Jak się nazywasz?" << endl;
    //cin >> tab;
    cin.getline(tab, rozmiar);
    cout << "Cześć " << tab << "!" << endl;
    drukuj(tab, zlicz(tab));
	return 0;
}

