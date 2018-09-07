// Zadanie numer 7 Lista 1
// Wczytywanie pliku z zad6 i sortowanie wyrazow po ilosci samoglosek

#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <map>

using namespace std;
int licznik = 0;

int main(int argc, char* argv[])
{
    fstream file(argv[1], std::ios::in);

    if (file.is_open()) {
        int key;
        std::string value;

        multimap<int, string> myMap;

        string x;
        while (getline(file, x))
            licznik++;
        cout << "Licznik linii: " << licznik <<endl;
        file.clear();
        file.seekg(0, ios::beg);

        for (int i = 0; i < licznik; i++) {
            file >> value >> key;
            myMap.insert(pair<int, string>(key, value));
        }

        for (multimap<int, string>::iterator iter = myMap.begin(); iter != myMap.end(); ++iter) {
            cout << "Wyraz: " << iter->second << " z iloscia samoglosek: " << iter->first
                 << endl;
        }
    }
    else
        std::cout << "Blad - zadano zly plik zrodlowy" << std::endl;
}
