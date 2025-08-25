// Zadanie - alphabet
// Utwórz lambdę, która ma wraz z każdym wywołaniem zwracać kolejną literę alfabetu
// , zaczynając od a. Gdy dojdziemy do z lambda powinna zwracać duże litery - od A do Z
// , a potem znów małe. Nie używaj zewnętrznych zmiennych statycznych lub globalnych.
// Zaimplementuj to zadanie bez używania tablicy ASCII.

#include <iostream>

int main()
{
    auto GetNextLetter = [letter = 'a']() mutable {
        auto result = letter;
        if ('z' == letter) {
            letter = 'A';
        } else if ('Z' == letter) {
            letter = 'a';
        } else {
            letter++;
        }

        return result;
    };

    for (auto i = 0; i < 100; i++) {
        std::cout << GetNextLetter();
    }

    return 0;
}