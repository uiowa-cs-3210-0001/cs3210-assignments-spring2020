#include <iostream>
#include <iomanip>

int main() {
    std::cout 
        << std::boolalpha
        << std::setprecision( 11 )
        << square( 2 ) << "\n" // prints 4
        << hello( "Bob" ) << "\n" // prints "Hello, Bob"
        << truthy() << "\n" // prints true
        << pi() << "\n" // prints 3.1415926536
        << letter( 'A' ) << "\n" // prints A
        ;
}
