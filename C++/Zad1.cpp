// Zadanie numer 1 Lista 1
// Dzielenie dwóch liczb zadanych argumentami

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char * argv[]) 
{
if (argc != 3) cout << "Blad - podano nieprawidlowa ilosc argumentow programu";
else
{
// Przekszta³cenie liczb z argumentów wywo³ania na liczby operacyjne double. W razie pojawienia siê przypadków typów
// mieszanych liczb i liter, program wytnie wszelkie znaki inne ni¿ cyfry, np 1a -> 1.
double liczba1 = strtod(argv[1], NULL);
double liczba2 = strtod(argv[2], NULL);
int czy_liczba; // zmienna s³u¿¹ca do sprawdzania, czy argument jest liczb¹
double wynik;

// Testowanie, czy funkcja strtod prawid³owo przekszta³ca argumenty programu
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
