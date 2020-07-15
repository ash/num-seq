#!/usr/bin/env raku

multi sub fib(0) {0}
multi sub fib(1) {1}
multi sub fib($n) {
    state @fib;
    return @fib[$n] if @fib[$n];

    return @fib[$n] = fib($n - 1) + fib($n - 2);
}

say "fib($_) = {fib($_)}" for ^101;
