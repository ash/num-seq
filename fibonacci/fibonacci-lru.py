from functools import lru_cache

@lru_cache(maxsize=1000)
def fib(n):
    if n < 2:
        return n
    return fib(n - 2) + fib(n - 1)

# print(fib(10))

for n in range(101):
    print(f"fib({n}) = {1}", fib(n))
