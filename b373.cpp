#include <iostream>
using namespace std;

int main() {
    int n, times = 0, tmp;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                times++;
            }
        }
    }

    cout << times;
}
