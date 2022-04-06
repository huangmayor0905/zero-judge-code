#include <iostream>
using namespace std;
int main(){
	int num;
	while (cin >> num) {
		if (num == 0) break;
		
		for (int i = 1; i < num; i++) {
			if (i % 7 != 0) {
				cout << i << " ";
			}
		}
		cout << "\n";
	}
}
