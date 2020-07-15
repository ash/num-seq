# List

fibonacci.txt - list of Fibonacci numbers from F0 to F100.

# C++ solutions

fibonacci.cpp - an iterative function to compute Fibonacci numbers. This program gets noticeably slow after N ~ 30.

fibobacci-vector.cpp - using the cached to keep previously computed numbers. This is much much faster for bigger Ns. Note that the maximum Fibonacci number that the `long long int` type (64 bits) can keep is fib(93).

# Raku solutions

fibonacci.raku - using multi-methods to define the function. Slow for numbers more than ~20.

fibonacci-cached.raku - using cache for computed values. Fast. As Raku does not limit the length of integers, the program can be used for Ns more than 100.
