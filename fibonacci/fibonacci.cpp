#include <iostream>

using namespace std;

unsigned int fib(unsigned int n) {
    if (n < 2) return n;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int n = 0; n <= 30; n++) {
        cout << "fib(" << n << ") = " << fib(n) << endl;
    }
}
