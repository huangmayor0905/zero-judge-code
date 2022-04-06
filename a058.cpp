#include <iostream>
using namespace std;

int main() {
    int n, a[3] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        switch (num % 3) {
            case 0:
                a[0]++; break;
            case 1:
                a[1]++; break;
            case 2:
                a[2]++; break;
        };
    }
    printf("%d %d %d", a[0], a[1], a[2]);
    return 0;
}
