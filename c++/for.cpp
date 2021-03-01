#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i = n; i++) {
        // Nếu n chia hết cho i thì i chính là ước của n
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}