#include<iostream>

using namespace std;

int factorial(int n) {
    //điều kiện thoát vòng lặp.
    if (n == 1) return 1;
    //gọi lại chính mình.
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}