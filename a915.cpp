#include <iostream>
// #include <algorithm>
using namespace std;

struct number {
    int x;
    int y;
};

int main() {
    int n;
    cin >> n;

    number num[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i].x >> num[i].y;
    }

    int max = num[0].x;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (num[j].x > num[j+1].x) {
                int temp = num[j+1].x;
                num[j+1].x = num[j].x;
                num[j].x = temp;

                temp = num[j+1].y;
                num[j+1].y = num[j].y;
                num[j].y = temp;
            } else if (num[j].x == num[j+1].x && num[j].y > num[j+1].y) {
                int temp = num[j+1].y;
                num[j+1].y = num[j].y;
                num[j].y = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << num[i].x << " " << num[i].y << "\n";
    }
}
