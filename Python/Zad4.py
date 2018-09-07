import sys
import math

def fibonacci(x,y,n):
    tablica = [x , y]
    for i in range(2, n): 
        tablica.append(tablica[i-2]+tablica[i-1])
    return tablica
    
if(len(sys.argv) != 4):
    print("Nieprawidlowa ilosc parametrow")
else:
    try:
        x = int(sys.argv[1])
        y = int(sys.argv[2])
        n = int(sys.argv[3])

        if n < 2:
            print("Podana liczba ilości elementow ciagu jest nieprawidlowa!")
            sys.exit()
            
        tab = fibonacci(x,y,n)
        print(tab)
        
    except ValueError:
        print('Podano nieprawidlowe parametry wywolania programu')
