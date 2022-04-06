#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        printf("%d\n", (n*n*n+5*n+6)/6);
    }
}
