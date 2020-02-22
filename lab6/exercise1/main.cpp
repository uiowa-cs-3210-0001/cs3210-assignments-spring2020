#include <iostream>

int n = -1;

int main() {
    do
    {
        int n = -1;
        std::cout << "Enter a positive number: ";
        std::cin >> n;
    } while ( n < 0 );

    std::cout << "You entered " << ::n << "\n";

    std::cout << "Numbers from zero to " << n - 1 << ":\n";
    int i = 0;
    while( i < n )
        std::cout << i++ << " ";

    std::cout << "\nNumbers from " << n << " to zero:\n";
    int i = n;
    while( i >= 0 )
        std::cout << i-- << " ";

    std::cout << "\n";
}