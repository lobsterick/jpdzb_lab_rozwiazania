// Zadanie numer 1 Lista 1
// Dzielenie dw�ch liczb zadanych argumentami

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char * argv[]) 
{
if (argc != 3) cout << "Blad - podano nieprawidlowa ilosc argumentow programu";
else
{
// Przekszta�cenie liczb z argument�w wywo�ania na liczby operacyjne double. W razie pojawienia si� przypadk�w typ�w
// mieszanych liczb i liter, program wytnie wszelkie znaki inne ni� cyfry, np 1a -> 1.
double liczba1 = strtod(argv[1], NULL);
double liczba2 = strtod(argv[2], NULL);
int czy_liczba; // zmienna s�u��ca do sprawdzania, czy argument jest liczb�
double wynik;

// Testowanie, czy funkcja strtod prawid�owo przekszta�ca argumenty programu
// cout << "Tryb Testowania. Podane argumenty to: " <<argv[1] <<" oraz " << argv[2] <<". Przeksztalcone liczby to: " << liczba1 <<" oraz " <<liczba2 <<endl <<"Wynikiem tego dzialania jest ";
    
    if (liczba2 == 0) cout << "Blad - proba dzielenia przez zero lub przez znak inny niz alfanumeryczny!";
    else if (sscanf(argv[1], "%d%*c", &czy_liczba) != 1) cout << "Blad, nie podano samych cyfr";
    else
	{
	    wynik = liczba1 / liczba2;
	    cout.setf(ios::fixed);
	    cout.precision(4);
		cout << wynik;	
}
}
}
