#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def silnia_it(n):
    
    wynik = 1
    
    
    for i in range(1, n + 1):
        
        wynik = wynik * i
        print(wynik)
     
    return wynik

def main(args):
    
    
    n = int(input("Podaj liczbe: "))
    print("{}! = {}".format(n, silnia_it(n)))
    #assert(silnia_it(0) == 1)
    #assert(silnia_it(4) == 24)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
