#include <iostream>
using namespace std;

int main() {
    int n, m, t;
    while (cin >> n >> m) {
        if (n < m) {
            t = n;
            n = m;
            m = t;
        }
        while (m > 0) {
            t = m;
            m = n % m;
            n = t;
        }
        cout << n;
    }
}
