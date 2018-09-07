// Zadanie numer 5 Lista 1
// Tabliczka mno¿enia od 0 do n
#include <stdlib.h>
#include <iostream>

using namespace std;

int tabliczkamnozenia(int n)
{
    int tablica[n][n];

    for (int i = 0; i < n; i++)
    {
        tablica[0][i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        tablica[i][0] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tablica[i][j] = tablica[0][j] * tablica[i][0];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n \n";
        for (int j = 0; j < n; j++)
        {
            cout << tablica[i][j] << "\t";
        }
    }

    cout << endl << endl;
}


int main(int argc, char* argv[])
{
    int czy_liczba;
    if (argc != 2)
        cout << "Blad - podano nieprawidlowa liczbe argumentow";
    else
    {
        int n = atoi(argv[1]);
        if (sscanf(argv[1], "%d%*c", &czy_liczba) != 1)
            cout << "Blad - podano inny znak niz liczbe";
        else if (n < 1)
            cout << ("Blad - argument powinien byc liczba dodatnia");
        else
            tabliczkamnozenia(n);
    }
}
