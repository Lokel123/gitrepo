#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tabliczka.py

def tabliczba(m, n):
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            print("{:>4}".format(i * j), end='')
        print()

def main(args):
    m = int(input("Podaj 1. liczbę: "))
    n = int(input("Podaj 2. liczbę: "))
    tabliczba(m, n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
