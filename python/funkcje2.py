#!/usr/bin/env python
# -*- coding: utf-8 -*-
#

def sumuj(a, b):
    """
    Funkcja zawiera sumę dwóch liczb
    """
    return a + b
    
def odejmij(a, b):
    """
    Funkcja zawiera różnice dwóch liczb
    """
    return a - b

def pomnoz(a, b):
    """
    Funkcja zawiera iloczyn dwóch liczb
    """
    return a * b 
    
def podziel(a, b):
    """
    Funkcja zawiera iloraz dwóch liczb
    """
    return a / b                 

def main(args):
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 2. liczbę: "))
    
    
    print(sumuj(a, b))
    print(odejmij(a, b))
    print(pomnoz(a, b))
    print(podziel(a, b))

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
