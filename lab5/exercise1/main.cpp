#include <iostream>
#include <string>

// use `auto` to simplify function and variable
// declarations where it makes sense (without
// changing the meaning of the program)

int square( int );

void print( std::string arg )
{
    std::cout << arg << "\n";
}


int main() {
    int n = square( 11 );
    bool b = 1;
    std::cout << std::boolalpha << b << "\n";

    std::string str = "Bob";
    print( str );
}


int square( int n ) { return n * n; }
