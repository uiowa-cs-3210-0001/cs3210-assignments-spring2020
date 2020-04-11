#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <fstream>

using game_state = std::vector<std::string>;

// TODO: implement loading the game state from a file,
// gracefully handle errors
game_state load_game( std::string const& filename );

// Bob's tests
TEST_CASE( "load_game" ) {
    auto game1 = load_game( "./input/3x3.txt" );
    REQUIRE( game1.size() == 3 );
    REQUIRE( game1 == game_state({
        "X O",
        " X ",
        "  O",
    }) );

    auto game2 = load_game( "./input/5x5.txt" );
    REQUIRE( game2.size() == 5 );
    REQUIRE( game2 == game_state({
        "O  XO",
        "OOXO ",
        "OXOOX",
        "OOXO ",
        "O  X ",
    }) );    
}

// Alice's tests
TEST_CASE( "load_game error handling" ) {
    REQUIRE_THROWS_AS( 
        load_game( "./input/no-such-file.txt" ), 
        std::runtime_error
    );

    REQUIRE_THROWS_WITH( 
        load_game( "./input/no-such-file.txt" ), 
        "Can't open ./input/no-such-file.txt" 
    );

    REQUIRE_THROWS_WITH( 
        load_game( "./input/5x5-bad.txt" ), 
        "Inconsistent row length: expected 5, got 3 (row #2)" 
    );

    REQUIRE_THROWS_WITH( 
        load_game( "./input/empty.txt" ), 
        "Incorrect board dimensions: 0x0" 
    );

    REQUIRE_THROWS_WITH( 
        load_game( "./input/5x3.txt" ), 
        "Incorrect board dimensions: 5x3" 
    );
}
