import sys
if len(sys.argv)==2:                 
    try:
        plik = sys.argv[1]
        slowa = open(plik).read()        
        tekst = [znak.strip().split(";") for znak in slowa.splitlines()]
        sortuj = list(sorted(tekst, key=lambda tekst: tekst[1], reverse=True))
        if len(sortuj) >= 10:
            for i in range(10):
                print (sortuj[i])
        else:
            for i in range(len(sortuj)):
                print(sortuj[i])
    except FileNotFoundError:
        print("Podany plik nie istnieje")
    except IndexError:
        print("Plik posiada odmienna od zakladanej strukture")

else:
    print('Za malo argumentow wejsciowych')
