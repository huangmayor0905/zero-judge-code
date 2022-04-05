#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, ans1, ans2;

    while (cin >> a) {
        cin >> b >> c;
        d = b * b - 4 * a * c;
        if (d < 0) {
            cout << "No real root\n";
        } else if (d == 0) {
            ans1 = (-b) / (2 * a);
            cout << "Two same roots x=" << ans1 << "\n";
        } else {
            ans1 = ((-b) + sqrt(d)) / (2 * a);
            ans2 = ((-b) - sqrt(d)) / (2 * a);
            (ans1 > ans2) ? cout << "Two different roots x1="
                                 << ans1 << " , x2="<< ans2 << "\n" 
                          : cout << "Two different roots x1="
                                 << ans2 << " , x2="<< ans1 << "\n"; 
        }
    }
}
