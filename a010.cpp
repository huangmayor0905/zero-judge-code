#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int times = 0;
        while (n % i == 0) {
            n /= i;
            times++;
        }
        
        if (times >= 2) {
            cout << i << "^" << times;
            if (n != 1) {
                cout << " * ";
            }
        } else if (times == 1) {
            cout << i;
            if (n != 1) {
                cout << " * ";
            }
        }
    }
    return 0;
}
