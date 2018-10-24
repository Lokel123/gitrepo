/*
 * liczby23.cpp
 */


#include <iostream>
using namespace std;

int liczby2() {
    int ile = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i != j) {
                cout << i << j <<" ";
            }
        }
    } 
    return ile;
}

int liczby3() {
    int ile = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                if (i != j && i != k && j != k) {
                    cout << i << j << k <<" ";
                    ile++;
                }
            }
        }
    }
    return ile;
}




int main(int argc, char **argv)
{   
    cout << "Liczb 2-cyfrowych: " << liczby2();
    cout << "Liczb 3-cyfrowych: " << liczby3();
	
	return 0;
}

