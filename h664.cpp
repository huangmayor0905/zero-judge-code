#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);  // 優化

    int q;
    cin >> q;

    int data[q][2];
    for (int i = 0; i < q; i++) {
        int n = 2;
        cin >> data[i][0] >> data[i][1];
        if (data[i][1] % 2 == 1) {
            cout << "1\n";
        } else {
            int t = data[i][1] / 2;
            while (true) {
                if (t % 2 == 1) {
                    cout << n << "\n";
                    break;
                } else {
                    n++;
                    t = t >> 1;  // 向右位移 1 = 除以二
                }
            }
        }
    }
}
