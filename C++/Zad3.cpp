// Zadanie numer 3 Lista 1
// Funkcja obliczaj¹ca sumê kwadratów od 0 do n, zadanego parametrem

#include <iostream>
#include <stdlib.h>

using namespace std;

int sumakwadratow(int n)
{
    int suma = 0;
    int i = 0;

    if (n >= 0)
    {
        for (i = 1; i <= n; i++)
        {
            suma += i * i;
        }
        cout <<suma;
    }

    else
        cout <<("Blad - podano za ma³a liczbe jako argument");
}

int main(int argc, char* argv[])
{
	int czy_liczba;
    int n = atoi(argv[1]);
    if (sscanf(argv[1], "%d%*c", &czy_liczba) != 1) cout << "Blad - podano dane wejsciowe rozne od liczb";
    else if (argc != 2) cout << ("Blad - podano nieprawidlowa liczbe argumentow programu");
    else  sumakwadratow(n);
}
