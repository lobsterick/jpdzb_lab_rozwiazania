import sys
import math

def pole_trojkata(bok1, bok2, bok3):
        if((bok1 < 0) or (bok2 < 0) or (bok3 < 0)):
          print('Podano ujemne wartosci bokow')
          sys.exit(0)
        elif (bok1 + bok2 < bok3 or bok1 + bok3 < bok2 or bok2 + bok3 < bok1):
          print('Z podanych bokow nie da sie zbudowac trojkata!')
          sys.exit()
        else:
          p = (bok1 + bok2 + bok3) / 2
          wynik = math.sqrt(p * (p - bok1) * (p - bok2) * (p - bok3))
          return wynik;

if len(sys.argv) != 4:
    print('Podano nieprawidlowa ilosc argumentow wywolania programu')
else:
    try:
        bok1 = float(sys.argv[1])
        bok2 = float(sys.argv[2])
        bok3 = float(sys.argv[3])
        print('Pole trojkata wynosi: ' + str(pole_trojkata(bok1, bok2, bok3)))
    except ValueError:
        print('Podano nieprawidlowe dane')
