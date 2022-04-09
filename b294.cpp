#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    for (int i = 0; i < n; i++) {
        total += a[i] * (i + 1);
    }

    cout << total << endl;
}
