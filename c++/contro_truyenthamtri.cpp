#include <iostream>

using namespace std;

void change(int* p) {
	(*p)++;
}

int main() {
	int a;
	cin >> a;
	change(&a);
	cout << "New value of a: " << a;
	return 0;
}