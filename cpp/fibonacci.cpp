/*
 * fibonacci.cpp
 */


#include <iostream>
using namespace std;
long int fibonacci_it(int n) {
    long int wynik = 0;
    long int a = 0;
    long int b = 1;
    
    if (n == 0) return a;
    if (n == 1) return b;
    for (int i = 2; i <= n; i++) {
        wynik = a + b;
        a = b;
        b = wynik;
    
    }
    
    return wynik;
}


long int fibonacci_it(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci_it(n-1) + fibonacci_it(n-2);


}


int main(int argc, char **argv)
{
    int n;
    cout << "Podaj numer wyrazu ciągu: ";
    cin >> n;
    cout << "Ciąg Fibonacciego do wyrazu " << n << ":" << endl;
    // dodać kod  pokazujażcy wszystkie wyrazy aż do końca ciągu
	cout << fibonacci_it(n);
    
    
	return 0;
}

