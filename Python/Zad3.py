import sys
import math

def SumaSzescianow(m,n):
    iterator = m
    sumator = 0
    while(iterator <= n):
        sumator += iterator**3
        iterator += 1
    return sumator

if len(sys.argv) !=3:
    print('Podano zla ilosc argumentow')
else:
    try:
        m = int(sys.argv[1])
        n = int(sys.argv[2])
        if m < 0 or n < 0:
            print('Podano ujemne wartosci')
        elif m>n:
            print ('Podana pierwsza liczba ciągu jest większa niż druga')
        else:   
            print('Suma szescianow podanych liczb wynosi ' + str(SumaSzescianow(m,n)))
    except ValueError:
        print('Nie podano liczby calkowitej')
