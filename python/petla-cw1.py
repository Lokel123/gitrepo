#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw1.py



def main(args):
    suma = 0
    
    
    
    while suma <= 75:
        liczba = int(input("Podaj liczbę: "))
        suma = suma + liczba
    print("Suma liczb:", suma)
        
        
        #if a >= 75:
            #print(a)
            
        
    
        
        #while a + b >= 75:
            #print(a, b)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
