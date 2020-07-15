#include <iostream>
#include <vector>

using namespace std;

unsigned long long fib(unsigned int n) {
    static vector<unsigned long long> cache;

    if (n < cache.size()) return cache[n];
    if (n == cache.size()) {
        unsigned long long f;

        if (n == 0) f = 0;
        else if (n < 2) f = 1;
        else f = cache[n - 1] + cache[n - 2];

        cache.push_back(f);

        return f;
    }
    else return fib(n - 1) + fib(n - 2);
}

int main() {
    for (unsigned int n = 0; n <= 93; n++) {
        cout << "fib(" << n << ") = " << fib(n) << endl;
    }
}
