#include <iostream>
using namespace std;

int main() {
    int a, z, x;
    cin >> a >> z >> x;

    if (a > z) {
        for (int i = a; i >= z; i += x) {
            cout << i << " ";
        }
        cout << "\b";
    } else {
        for (int i = a; i <= z; i += x) {
            cout << i << " ";
        }
        cout << "\b";
    }
}
