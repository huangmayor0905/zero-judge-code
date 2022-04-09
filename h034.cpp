#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
	cin >> n;

	string data[n];
	for (int i = 0; i < n; i++) {
		data[i] = "";
	}
	int max_len = 0;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
		if (data[i].length() > max_len) {
			max_len = data[i].length();
		}
	}

	for (int i = 0; i < n; i++) {
		while (data[i].length() < max_len) {
			data[i].insert(data[i].length(), "0");
		}
	}
	
	for (int i = 0; i < max_len; i++) {
		for (int j = 0; j < n; j++) {
			if (!isdigit(data[j][i])) {
				cout << data[j][i];
			}
		}
	}
	cout << "\n";
	return 0;
}
