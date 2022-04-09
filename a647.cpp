#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    double m[num], p[num];
    double x[num];
    for (int i = 0; i < num; i++) {
        cin >> m[i] >> p[i];
        x[i] = (p[i] - m[i]) / m[i] * 100;
    }
    for (int i = 0; i < num; i++) {
        if (x[i] > 0) {
            x[i]+=0.00001;
        } else if (x[i] < 0) {
            x[i]-=0.00001;
        }
        if (x[i] <= -7 || x[i] >= 10) {
            printf("%6.2f%% dispose\n", x[i]);
        } else {
            printf("%6.2f%% keep\n", x[i]);
        }
    }  
}
