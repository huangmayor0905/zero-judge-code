#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    for (int i = 0; i < word.length() - 1; i++) {
        if (word[i] > word[i+1]) {
            cout << word[i] - word[i+1];
        } else {
            cout << word[i+1] - word[i];
        }
    }
}
