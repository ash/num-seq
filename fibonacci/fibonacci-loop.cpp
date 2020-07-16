#include <iostream>

using namespace std;

int main() {
    unsigned long long a = 0;
    unsigned long long b = 1;

    cout << a << "\n" << b << endl;

    for (int n = 2; n <= 93; n++) {
        unsigned long long c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
}
