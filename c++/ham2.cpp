#include <iostream>

using namespace std;

double circumference(double r) {
	return 2 * r * 3.14;
}

int main() {
	double r;
    cout << "ban kinh r = ";
	cin >> r;
	cout << "chu vi = " << circumference(r);
	return 0;
}