# HW6 — Problem 1

## Introduction

[Doctest](https://github.com/onqtam/doctest/blob/master/doc/markdown/tutorial.md) is a light-weight, single-header C++ testing framework that we'll to be using going forward in place of the standard `assert`. **The assignment repls** (and the corresponding Github folders for those of you who are working on Github) **will come with Doctest installed and pre-configured**, so you won't have to do anything special to start using it. It's also very straightforward to use; essentially, instead of `assert` we'll be utilizing `REQUIRE` to verify that our code does what it's supposed to:

```C++
int x = 2;
int y = 10;
REQUIRE( x == y/2 ); // Hmm...
```

The main advantage of Doctest's `REQUIRE` over `assert` is that when the tested expression doesn't hold true, Doctest will not only point us to the line in question, but also spell out what exactly went wrong:

```
main.cpp:7: FATAL ERROR: REQUIRE( x == y/2 ) is NOT correct!
  values: REQUIRE( 2 == 5 )
```

This greatly reduces the amount of troubleshooting you need to do in order to figure out why a particular test is failing.


## Problem statement

Intrigued by the code he saw on your screen, your coworker Bob decided to write his own `point` type for working with [Cartesian coordinates](https://en.wikipedia.org/wiki/Cartesian_coordinate_system).

He recently read an introductory article on test-driven development, so, following Alice's recommendation, he downloaded Doctest and started out by writing a few tests. Being a newcomer to C++, though, Bob got stuck pretty quickly, and came over to your desk asking for help. Faced with the prospect of him peeking over your shoulder for the rest of the week, you reluctantly agreed.

Help Bob to **make [his code](https://repl.it/@agurtovoy/hw6-problem1)([`main.cpp`](main.cpp)) compile and run correctly using the provided tests as guidance**.
