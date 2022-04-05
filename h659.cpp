#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

	int km, wait, start, stop, total = 0;
	int night_add[5] = {185, 195, 205, 215, 225};
	cin >> km >> wait >> start >> stop;

	if (km <= 2) {
		total = 20;
	} else {
		total += 20 + (km - 2) * 5;
	}

	total += (wait / 2) * 5;

	if (start >= 18) {
		for (int i = 0; i < (stop - start); i++) {
			total += night_add[i + start - 18];
		}
	} else if (start < 18 && stop > 18) {
		for (int i = 0; i < (stop - 18); i++) {
			total += night_add[i];
		}
	}
	cout << total << "\n";
}
