#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfr.py
#  liczba % 10 - ostatnia liczba
#liczba / 10 - liczba nie całkowita
#int(liczba / 10) 


def main(args):
    
     m = int(input("Podaj liczbę 2-cyfrową: "))
     m = int(m)
     while m < 10:
        print("Błędne dane")
        m = int(input("Podaj liczbę 2-cyfrową: "))
        m = int(m)
     suma = 0
        
     while m > 0:
        suma = suma + (m % 10)
        
        m = int(m / 10)
     print("Suma:", suma)
        
    
    
     return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
