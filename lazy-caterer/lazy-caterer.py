def p(n):
    return round((n ** 2 + n + 2) / 2)

for n in range(101):
    print(f"p({n}) = {p(n)}")
