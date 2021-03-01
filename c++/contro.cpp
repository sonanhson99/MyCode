#include<iostream>

using namespace std;

int main() {
	// Khai báo biến a;
	int a = 5;
	// Khai báo con trỏ p
	int* p;
	// Cho con trỏ p trỏ tới biến a.
	p = &a;
	// In ra địa chỉ của biến a và giá trị của con trỏ p.
	cout << "Address of a: " << &a << endl;
	cout << "Value of p: " << p << endl;
    /*
    // Thay đổi giá trị của biến a thông qua con trỏ p
	*p = 7;
	// In ra giá trị của biến a sau khi thay đổi
	cout << "Value of a: " << a;
    */
	return 0;
}