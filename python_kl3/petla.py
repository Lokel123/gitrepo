#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petlapy
import random 

def losuj(ile, lmin, lmax):
    lista = []
    for i in range(ile):
        lista.append(random.randint(lmin, lmax))
    print(lista)
    return lista


def main(args):
    liczby = losuj(5, 0, 30)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
