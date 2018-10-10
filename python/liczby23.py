#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby23.py

def Liczby2():
    """
    Funkcja drukuje wszystkie liczby 2 cyfrowe, w których nie powtarzają
    się cyfry. Na koniec zwraca ilość takich liczb.
    Wykluczone liczby 11, 22, 33, ...
    """
    ile = 0
    for i in range(1, 10):
        for j in range(10):
            if i != j:
                print("{}{} ".format(i, j), end='')
                ile = ile + 1
    return ile
    
def liczby3():
    

def main(args):
    print("Liczb 2-cyfrowych:", Liczby2())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
