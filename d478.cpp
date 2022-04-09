#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int times, num;
    cin >> times >> num;

    int data1[num], data2[num];
    for (int i = 0; i < times; i++) {
        for (int j = 0; j < num; j++) {
            cin >> data1[j];
        }
        for (int j = 0; j < num; j++) {
            cin >> data2[j];
        }
        int same = 0, x = 0, y = 0;
        while (x < num && y < num) {
            if (data1[x] == data2[y]) {
                same++;
                x++;
                y++;
            }
            if (data1[x] < data2[y]) {
                x++;
            } else if (data1[x] > data2[y]) {
                y++;
            }
        }
        cout << same << '\n';
    }
    return 0;
}
