/*
 * liczby23.cpp
 */


#include <iostream>
using namespace std;

int liczby1() {
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

int main(int argc, char **argv)
{cout << "Liczb 2-cyfrowych:"; << liczby2();
	
	return 0;
}
