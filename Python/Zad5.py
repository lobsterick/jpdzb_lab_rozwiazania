import sys
if len(sys.argv)==3:                 
    try:
        m=int(sys.argv[1])
        n=int(sys.argv[2])
        if m<=0 or n<=0:
            print("wpisz liczbe wieksza od 0")
        else:
            for y in range(1, m+1):
                print ("\t".join( (str(x*y) for x in range(1, n+1)) ))
    except NameError:
        print("wpisz liczbe calkowita")
    except ValueError:
        print("Podano argument inny od liczby")
else:
    print ("Zla liczba argumentow wejsciowych")
