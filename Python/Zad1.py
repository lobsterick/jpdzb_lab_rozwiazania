import sys

if len(sys.argv) != 3:
    print('Nie podano dwoch liczb')
else:
    try:
        licznik = float(sys.argv[1])
        dzielnik = float(sys.argv[2])
        wynik =licznik/dzielnik
        print('Wynikiem operacji jest %.5f' % (wynik))
    except ZeroDivisionError:
        print('Dzielenie przez zero')
    except ValueError:
        print('Nie podano liczby calkowitej')
