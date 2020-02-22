#include <iostream>
#include <cassert>

int main() {
    assert( 17 - 10 / 3 - 1 == 12 );
    assert( 17 - 10 * 2 > 0 );
    assert( 17 < 10 || 1 + 1 << 1 == 3 );
    std::cout << "All tests pass\n";
}
