#include<iostream>

using namespace std;

// Khai báo struct student với 2 thuộc tính là name và age
struct Student {
	string name;
	int age;
};

int main() {
	// Tạo ra 1 đối tượng kiểu Student để lưu thông tin của 1 sinh viên
	Student s1;
	s1.name = "Blackcat";
	s1.age = 24;
	cout << "Name: " << s1.name << endl;
	cout << "Age :" << s1.age;
	return 0;
}