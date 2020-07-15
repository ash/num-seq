#include <iostream>

using namespace std;

unsigned int fib(unsigned int n) {
    if (!n) return 0;
    if (n < 2) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int n = 0; n <= 100; n++) {
        cout << "fib(" << n << ") = " << fib(n) << endl;
    }
}
