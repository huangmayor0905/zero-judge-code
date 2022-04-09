#include <iostream>
// #include <>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    while (getline(cin, sentence)) {
        stringstream sentence_to_word(sentence);
        string word;
        int num, sum = 0;

        while (sentence_to_word >> word) {
            stringstream word_to_int(word);

            while (word_to_int >> num) {
                stringstream num_to_str;
                num_to_str << num;               // 此時 num_to_str 流進 int 的 num
                if (word == num_to_str.str()) {  // 判斷這個 word 是否為數字 num (num_to_str 轉 str)
                    sum += num;
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
