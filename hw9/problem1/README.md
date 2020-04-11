# HW9 — Problem 1

## Introduction

We've been using [Doctest](https://github.com/onqtam/doctest)'s `REQUIRE` macro to verify that our code does what it's supposed to during the course of normal execution. To be able to test how our code is handling errors, Doctest gives us a couple of additional `REQUIRE` variations: 

 - `REQUIRE_THROWS_AS( <expression>, <exception type> )` tests that **an exception of the specified type is thrown** during evaluation of the expression.

 - `REQUIRE_THROWS_WITH( <expression>, <string> )` tests that **an exception is thrown** during evaluation of the expression **and that the exception's message matches the provided string**.

Here's a couple of examples demonstrating their use:

```C++
void foo() { throw std::runtime_error( "foobar!" ); }
void bar() { throw std::logic_error( "baroob!" ); }
void zoo() {}

TEST_CASE( "error handling" ) {
    REQUIRE_THROWS_AS( foo(), std::runtime_error ); // OK 
    REQUIRE_THROWS_WITH( foo(), "foobar!" ); // OK 
    REQUIRE_THROWS_WITH( foo(), "foo!" ); // fails 

    REQUIRE_THROWS_AS( bar(), std::runtime_error ); // fails 
    REQUIRE_THROWS_WITH( bar(), "baroob!" ); // OK 

    REQUIRE_THROWS_AS( zoo(), std::runtime_error ); // fails 
    REQUIRE_THROWS_AS( zoo(), std::exception ); // fails
}
```

## Problem statement

"Hey, thx for helping me out last week" — that was, of course, Bob. He was still working on his Tic-Tac-Toe game:

> Alice helped me to add tests for err handling 

> Can u help me to get them passing?

"Well, I could use a break," you thought to yourself — "Yeah, let me take a look."

Using your solution to [hw8-problem1](https://github.com/uiowa-cs-3210-0001/cs3210-assignments-spring2020/tree/master/hw8/problem1) as a starting point and Alice's tests [here](https://repl.it/@agurtovoy/hw9-problem1) ([`main.cpp`](main.cpp)) as a guidance, enhance your implementation of the `load_game` function to handle various error situations. **Do not modify the tests**. See the [`input` subdirectory](input) for the text files used in the tests.
