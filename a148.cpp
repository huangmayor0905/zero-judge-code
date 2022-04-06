#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a[n];
        float sum = 0, ave;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ave = sum / n; 
        if (ave > 59) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
}
