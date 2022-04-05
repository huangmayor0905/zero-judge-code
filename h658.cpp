#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    pair<int, int> fisherman;
    cin >> fisherman.first >> fisherman.second;

    int amount;
    cin >> amount;
    
    int fish[amount][2];
	  float d[amount];
    for (int i = 0; i < amount; i++) {
        cin >> fish[i][0] >> fish[i][1];
        d[i] = sqrt(pow(fisherman.first - fish[i][0], 2) + pow(fisherman.second - fish[i][1], 2));
    }

    int min = 0;
    for (int i = 1; i < amount; i++) {
        if (d[i] < d[min]) {
            min = i;
        }
    }

    cout << fish[min][0] << " " << fish[min][1] << "\n";
}
