#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
    long long n, m;

	while (cin >> n) {
		cin >> m;
	
		long long data[100000] = {0};
		for (int i = 1; i <= n; i++) {
			cin >> data[i];
		}

		for (int i = 0; i < m; i++) {
			int sum = 0;
			int start, stop;
			cin >> start >> stop;
			for (int j = start; j <= stop; j++) {
				sum += data[j];
			}
			cout << sum << "\n";
		}
	}
}
