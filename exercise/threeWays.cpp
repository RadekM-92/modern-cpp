#include <algorithm>
#include <iostream>
#include <vector>

// Zadanie threeWays.cpp
// Użyj odpowiedniego algorytmu STL, aby sprawdzić, czy wszystkie elementy wektora numbers są podzielne przez 3.

// std::vector numbers = {18, 21, 36, 90, 27, 14, 103};
// Zaimplementuj 3 wersje:

// lambda
// funktor
// funkcja

struct DivisibleBy {
    const int d;
    DivisibleBy(int n)
        : d(n)
    {
    }
    bool operator()(int n) const { return n % d == 0; }
};

bool DivisibleBy3(int val)
{
    return 0 == (val % 3);
}

int main()
{
    std::vector numbers = { 18, 21, 36, 90, 27, 14, 103 };

    auto result = std::all_of(numbers.begin(), numbers.end(), [](auto const& el) {
        return 0 == (el % 3);
    });
    std::cout << std::boolalpha << result << "\n";

    result = std::all_of(numbers.begin(), numbers.end(), DivisibleBy(3));
    std::cout << std::boolalpha << result << "\n";

    result = std::all_of(numbers.begin(), numbers.end(), DivisibleBy3);
    std::cout << std::boolalpha << result << "\n";

    return 0;
}