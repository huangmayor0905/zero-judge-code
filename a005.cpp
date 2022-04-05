#include <iostream>
using namespace std;

int main() {
    int times, a, b, c, d, e;
    cin >> times;

    for (int i = 0; i < times; i++) {
        cin >> a >> b >> c >> d;
        if (b - a == d - c) {
            e = d + (d - c);
            cout << a << " " 
                 << b << " "
                 << c << " "
                 << d << " "
                 << e << "\n"; 
        } else if (b / a == d / c) {
            e = d * (d / c);
            cout << a << " " 
                 << b << " "
                 << c << " "
                 << d << " "
                 << e << "\n"; 
        }
    }
}
