#include <iostream>
using namespace std;

int main() {
    long long times;
    cin >> times;
    for (long long i = 0; i < times; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        switch (a) {
            case 1:
                cout << b + c << endl;
                break;
            case 2:
                cout << b - c << endl;
                break;
            case 3:
                cout << b * c << endl;
                break;
            case 4:
                cout << b / c << endl;
                break;
        };
    }
}
