import sys
if(len(sys.argv) !=2):
    print('Podano nieprawidlowa ilosc argumentow')
else:
    try:
        nazwa_pliku = sys.argv[1] 
        slowo_wejsciowe = input("Wprowadź słowo: ")
        spolgloski="b, c, ć, d, f, g, h, j, k, l, ł, m, n, ń, p, r, s, ś, t, w, z, ż, ź, B, C, Ć, D, F, G, H, J, K, L, M, N, P, R, S, T, W, Z, Ź, Ż, Ł"
        plik = open(nazwa_pliku, 'a')
        ilosc_spolglosek = 0
        for znak in slowo_wejsciowe: 
            if(spolgloski.__contains__(znak)):
                ilosc_spolglosek += 1 
        plik.write(slowo_wejsciowe + ';' + str(ilosc_spolglosek) + '\n')
        print (slowo_wejsciowe + ';' + str(ilosc_spolglosek))
        plik.close()
    except ValueError:
        print('Nie podano prawidlowych argumentow')
    
