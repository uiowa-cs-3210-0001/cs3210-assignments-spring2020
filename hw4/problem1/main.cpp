#include <iostream>
#include <cmath>
#include <cassert>

// implement is_sqrt here


int main()
{
    assert( is_sqrt( 2, 1.414216 ) );
    assert( !is_sqrt( 2, 1.414218 ) );
    assert( !is_sqrt( 2, 1.414210 ) );

    assert( is_sqrt( 3, 1.732050 ) );
    assert( !is_sqrt( 3, 1.732054 ) );
    assert( !is_sqrt( 3, 1.732047 ) );

    assert( is_sqrt( 4, 2 ) );
    assert( !is_sqrt( 4, 2.000003 ) );

    assert( is_sqrt( 5, 2.236067 ) );
    assert( !is_sqrt( 5, 2.236065 ) );
    assert( !is_sqrt( 5, 2.236071 ) );

    assert( is_sqrt( 9, 3 ) );
    assert( !is_sqrt( 9, 3.000002 ) );

    assert( is_sqrt( 4294967296, 65536 ) );
    assert( !is_sqrt( 4294967296, 65536.0000000001 ) );

    std::cout << "All tests pass\n";
}
