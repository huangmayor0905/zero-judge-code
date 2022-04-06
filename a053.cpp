#include <iostream>
using namespace std;

int main() {
    int amount, score;
    while (cin >> amount) {
        score = 0;
        for (int i = 1; i <= amount; i++) {
            if (i <= 10) {         // 1~10  計 6 分
                score += 6;
            } else if (i <= 20) {  // 11~20 計 2 分
                score += 2;
            } else if (i <= 39) {  // 21~39 計 1 分
                score += 1;
            } else {               // 大於等於 40 皆為 100
                score = 100;
            }
        }

        cout << score << "\n";
    }

    return 0;
}
