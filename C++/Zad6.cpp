// Zadanie numer 6 Lista 1
// Liczenie ilosci samoglosek i zapisywanie do pliku z parametru

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(int argc, char* argv[])
{
	if (argc != 2) cout << "Podano nieprawidlowa liczba parametrow";
	else
	{
    setlocale(LC_ALL, "");
    int ilosc, licznik = 0;
    bool flaga_spacja = 0;
    string tekst;

    cout << "Podaj tekst: " << endl;
    getline(cin, tekst);
    string::size_type rozmiar = tekst.size();
    ilosc = static_cast<int>(rozmiar);

    for (int i = 0; i < ilosc; i++)
    {
        if (tekst[i] == 'a' || tekst[i] == '¹' || tekst[i] == 'y' || tekst[i] == 'i'
            || tekst[i] == 'e' || tekst[i] == 'ê' || tekst[i] == 'u' || tekst[i] == 'O'
            || tekst[i] == 'A' || tekst[i] == '¥' || tekst[i] == 'Y' || tekst[i] == 'I'
            || tekst[i] == 'E' || tekst[i] == 'Ê' || tekst[i] == 'U' || tekst[i] == 'o')

            licznik++;
            
        if (tekst[i] == ' ') flaga_spacja=1;
    }
    if (flaga_spacja==1) cout << "Blad - nalezy wprowadzic tylko jeden wyraz";
    else
    {
    fstream plik;
    plik.open(argv[1], ios::out | ios::app);
    plik << tekst << "\t" << licznik << endl;
    plik.close();
    return 0;
    }
    }
}
