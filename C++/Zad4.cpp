// Zadanie numer 4 Lista 1
// Funkcja Fibbonaci o parametrach x, y, n, zwracajaca ciag n liczb Fibbonaciego
// zaczynajac od x oraz y
// DODATKOWO: Sprawdzaj¹ca, czy zadane liczby nale¿¹ do ciagu Fibonacciego

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

// Sprawdzanie, czy x oraz y sa idealnymi kwadratami, na potrzeby funkcji bool
// czyfibb
bool czykwadratidealny(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

// Zwraca 1 kiedy liczba znajduje siê w ciagu Fibonacciego
bool czyfibb(int n)
{
	if (n<=0) cout << "Blad - liczba n jest za mala";
	else return czykwadratidealny(5 * n * n + 4) || czykwadratidealny(5 * n * n - 4);
}

int fibonacci(int x, int y, int n)
{
	if (n<=0) cout << "Blad - liczba n jest liczba ujemna";
	else
	{
    long long int fib[n];

    // ustawienia tolerancji górnej granicy liczb,
    // na których operuje program (zabezpieczenie
    // przed przepe³nieniem typu danych)
    long long int stop = 9223372036854775807 * 0.7;

    bool flaga_stop; // flaga przepe³nienia typu danych

    if (x >= 0 && y >= 0 && n >= 0)
    {
        fib[0] = x;
        fib[1] = y;

        // Stworzenie tablicy z liczbami ciagu Fibonacciego
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            if (fib[i] > stop)
            {
                flaga_stop = 1;
                break;
            }
        }

        if (flaga_stop != 0)
            cout << "Mo¿liwe przekroczenie zakresu zmiennej. Obliczenia zostaly przerwane";
        else
        {
            cout << "Cyfry to: " << endl;
            for (int k = 0; k <= n; k++)
            {
                cout << fib[k] << " ";
                if (czyfibb(fib[k]) == 1)
                    cout << "nalezaca do ciagu Fibbonaciego" << endl;
                else
                    cout << "nie nalezaca do ciagu Fibbonaciego" << endl;
            }
        }
    }

    else
        cout << endl << ("Blad - podano argumenty nie bedace liczbami dodatnimi!") << endl;
}}

int main(int argc, char* argv[])
{
	if (argc != 4) cout << ("Blad - podano nieprawidlowa liczbe argumentow!") << endl;
	else
	{
	int czy_liczba;
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int n = atoi(argv[3]);
    
	if (sscanf(argv[1], "%d%*c", &czy_liczba) != 1 || sscanf(argv[2], "%d%*c", &czy_liczba) != 1 || sscanf(argv[3], "%d%*c", &czy_liczba) != 1) cout << "Blad - podano dane wejsciowe rozne od liczb";
    else
    fibonacci(x, y, n);
    } 
}
