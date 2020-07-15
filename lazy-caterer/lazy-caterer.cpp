#include <iostream>

using namespace std;

int p(int n) {
    return (n + n * n + 2) / 2;
}

int main() {
    for (int n = 0; n <= 100; n++) {
        cout << "p(" << n << ") = " << p(n) << endl;
    }
}
