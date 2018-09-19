
# DRY - don't repeat yourself
#print()
#input()
#int()

def witaj():
    imie = input("Podaj swoje imię ")
    print("Witaj", imie, "!" )
    
    
def suma2(a, b):
    """
    Funkcja sumuje dwie liczby i zwraca wynik
    """
    return a + b
    
def roznica(l1, l2):
    pass
        
def iloczyn(l1, l2):
    pass
    
def iloraz(l1, l2):
    pass

def hello():
    print("Witaj, jestem Python!")



def main(args):
    a = int(input("Podaj 1. liczbę: "))
    print(a)
    b = int(input("Podaj 2. liczbę: "))
    print(b)
    
    #print("Suma:", a + b)
    #suma(a, b)
    roznica(a, b)
    iloczyn(a, b)
    iloraz(a, b)
    
    print("Suma", suma2(a, b))
    #print("Różnica", a - b)
    #print("Iloczyn", a * b)
    #print("Iloraz", a / b)
    
    hello()  #wywołanie funkcji
    witaj()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
