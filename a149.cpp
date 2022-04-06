#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string num;
        int sum = 1;
        cin >> num;
        for (int j = 0; j < num.length(); j++) {
            sum *= num[j] - '0';
        }
        cout << sum << "\n";
    }
}
