#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py

def potega_it(a, n):
    
    wynik = 1
    
    for i in range(n):
        
        wynik = wynik * a
        #print(wynik)
     
    return wynik

def main(args):
    
    #a = int(input("Podaj podstawę: "))
    #n = int(input("Podaj wykładnik: "))
    
    #print("Potega {} do {} wynosi {}".format(a, n, potega_it(a, n)))
    assert(potega_it(3 ,2) == 9)
    assert(potega_it(3, 3) == 27)
    assert(potega_it(0, 2) == 0)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
