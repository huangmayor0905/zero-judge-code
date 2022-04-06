#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;

    int ans = 0, t = 1;
    for (int i = 0; i < num.length(); i++) {
        ans += t * (num[i] - 48);
        t *= 10;
    }
    cout << ans;
}
