#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury_rek.py

import turtle 

def kwadrat(bok, kat, ile):
    for i in range(ile):
        turtle.forward(bok)
        turtle.right(kat)

def figura_rek(bok, kat, ile, krok):
    turtle.forward(bok)
    turtle.right(kat)  
    if kat > 0:
        figura_rek(bok, kat - krok, ile, krok)


def main(args):
    
    turtle.setup(800, 600)
    turtle.color('red', 'blue')
    turtle.begin_fill()
    turtle.speed(0)
    figura_rek(200, 105, 100, 10)
    
    
    turtle.end_fill()
    turtle.done()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
