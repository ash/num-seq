#include <iostream>

using namespace std;

const int max_n = 93;
unsigned long long int fib[max_n + 1];

int main() {
    unsigned long long a = 0;
    unsigned long long b = 1;

    fib[0] = 0;
    fib[1] = 1;

    for (int n = 2; n <= max_n; n++) {
        fib[n] = a + b;
        a = b;
        b = fib[n];
    }

    for (int n = 0; n <= max_n; n++) {
        cout << "fib(" << n << ") = " << fib[n] << endl;
    }
}
