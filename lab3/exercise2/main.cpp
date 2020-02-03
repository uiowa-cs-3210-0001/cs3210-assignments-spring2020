#include <iostream>

int main() {
    print_square( 2 );
}

void print_square( int n )
{
    std::cout 
        << "the square of " << n 
        << " is " << square( n ) << "\n";
}

int square( int n )
{
    return n * n;
}
