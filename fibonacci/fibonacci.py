def fib(n):
    if n < 2:
        return n
    return fib(n - 1) + fib(n - 2)

# print(fib(10))

for n in range(30):
    print(f"fib({n}) = {fib(n)}")
