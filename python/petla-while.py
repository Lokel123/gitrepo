#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for.py
#  



def main(args):
    start = int(input("Podaj 1. liczbę: "))
    stop = int(input("Podaj 2. liczbę: "))
    
    while start >= stop:
        print("Błąd. Podaj większą liczbę:")
        stop = int(input("Podaj 2. liczbę:"))
    
    
    
    if start >= stop:
        print("Błędne dane")
        exit(0)
    
    
    for i in range(start, stop + 1):
        if i % 2 == 0: 
            print(i)
        else:
            print("Liczba nieparzysta")
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
