#include<iostream>

using namespace std;

// Khai báo hàm show với đầu vào là biến name kiểu string
void show(string name) {
	// Hiển thị biến name ra màn hình
	cout << "Hello " << name;
}

int main() {
	string name = "Codelearn";
	// Bạn cũng có thể gọi show("Codelearn"); thay vì show(name);
	show(name);
    cout << endl;
    show("do cong son");
	return 0;
}