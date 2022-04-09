#include <iostream>
using namespace std;

int main() {
	int x, range, v;
	cin >> x >> range >> v;

	int times;
	cin >> times;

	for (int i = 0; i < times; i++) {
		int ball_x, ball_v;
		cin >> ball_x >> ball_v;

		if ((ball_x >= x - range && ball_x <= x + range) && (ball_v <= v)) {
			x = ball_x;
		} else if ((ball_x >= x - range && ball_x <= x + range) && (ball_v > v)) {
			if (ball_x < x) {
				x += 15;
			} else if (ball_x >= x) {
				x -= 15;
			}
		}
	}

	cout << x << "\n";
}
