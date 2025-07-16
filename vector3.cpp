#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[26] = {0};

    // Counting each letter
    for(int i = 0; i < s.size(); i++) {
        count[s[i] - 'a']++;
    }

    // Printing letters with their count
    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            char ch = 'a' + i;
            cout << ch << " : " << count[i] << endl;
        }
    }

    return 0;
}
