#include <cmath>
#include <cstring>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string data;
        cin >> data;
        if (data[0] >= '0' && data[0] <= '9') {
            stringstream str_to_int(data);
            int a;
            str_to_int >> a;
            string ans;
            while (a != 0) {
                if (a % 26 == 0) {
                    ans.push_back('A' + (a % 26) + 25);
                    a -= 26;
                } else {
                    ans.push_back('A' + (a % 26) - 1);
                    a -= (a % 26);
                }
                a /= 26;
            }

            for (int i = ans.length() - 1; i >= 0; i--) {
                cout << ans[i];
            }
            cout << "\n";
        } else {
            int ans = 0, power = 0, i = data.length() - 1;
            while (!data.empty()) {
                bool isZ = 0;
                if (data[i] == 'Z') {
                    isZ = true;
                }
                ans += (data[i] - 'A' + 1) * pow(26, power);
                data.pop_back();
                power++;
                i--;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
