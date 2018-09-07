// Zadanie numer 2 Lista 1
// Pole trójk¹ta o 3 bokach wczytanych z parametrów

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

using namespace std;

int main(int argc, char * argv[]) 
{
if (argc != 4) cout << "Podano nieprawidlowa ilosc argumentow programu!";

else

{
 
// Przekszta³cenie liczb z argumentów wywo³ania na liczby operacyjne float. W razie pojawienia siê przypadków typów
// mieszanych liczb i liter, program wytnie wszelkie znaki inne ni¿ cyfry, np 1a -> 1.
float a = strtof(argv[1], NULL);
float b = strtof(argv[2], NULL);
float c = strtof(argv[3], NULL);
float p;
float pole;
int czy_liczba;

// Testowanie, czy funkcja strtof prawid³owo przekszta³ca argumenty programu
//cout <<endl << "Tryb Testowania. Podane argumenty to: " <<argv[1] <<" oraz " << argv[2] << " oraz " << argv[3] <<endl;
//cout <<"Przeksztalcone liczby to: " << a <<" oraz " <<b <<" oraz " <<c <<endl <<"Wynikiem tego dzialania jest " <<endl;
    
    if (sscanf(argv[1], "%d%*c", &czy_liczba) != 1 || sscanf(argv[2], "%d%*c", &czy_liczba) != 1 || sscanf(argv[3], "%d%*c", &czy_liczba) != 1)
	cout << "Podano dane rozne od cyfr!";
	else if	(c<a+b && a<b+c && b<a+c)
{
	    p=(a+b+c)*0.5;
        pole=sqrt(p*(p-a)*(p-b)*(p-c));
		cout << pole;	
}
	else
{
		cout <<endl << ("Blad, podane liczby nie moga byc bokami trojkata") <<endl;
}
}
}
