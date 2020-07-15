# Fibonacci numbers

## Sequence

[fibonacci.txt](fibonacci.txt) — list of Fibonacci numbers from F0 to F101.

## C++ solutions

[fibonacci.cpp](fibonacci.cpp) — an iterative function to compute Fibonacci numbers. This program gets noticeably slow after N ~ 30.

[fibonacci-vector.cpp](fibonacci-vector.cpp) — using the cached to keep previously computed numbers. This is much much faster for bigger Ns. Note that the maximum Fibonacci number that the `long long int` type (64 bits) can keep is fib(93).

## Raku solutions

[fibonacci.raku](fibonacci.raku) — using multi-methods to define the function. Slow for numbers more than ~20.

[fibonacci-cached.raku](fibonacci-cached.raku) — using cache for computed values. Fast. As Raku does not limit the length of integers, the program can be used for Ns more than 100. Actually, there is no need to do it like this, as the next program is better:

[fibonacci-sequence.raku](fibonacci-sequence.raku) — using a built-in sequence generator. Very fast.

## Python3 solutions

[fibonacci.py](fibonacci.py) — recursive definition. Slow for numbers > 20-30.

[fibonacci-lru.py](fibonacci-lru.py) — same implemenation but with an `@lru_cache` decorator, which makes it fast.
