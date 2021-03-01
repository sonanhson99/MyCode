#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int count = 0;
    //s.size() chính là độ dài của xâu s
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    cout << count;
    return 0;
}