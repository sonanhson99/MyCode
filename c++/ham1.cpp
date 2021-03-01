#include<iostream>

using namespace std;

// Khai báo hàm sum với kiểu trả về là int và đầu vào là số n
int sum(int n) {
	// Biến lưu trữ tổng các số từ 1 tới n
	int add = 0;
	// Tính tổng các số từ 1 tới n và lưu vào biến add
	for (int i = 1; i <= n; i++) {
		add += i;
	}
	// Trả về add (gán kết quả của hàm sum cho add)
	return add;
}

int main() {
	// Hiển thị giá trị của hàm sum với các đầu vào khác nhau ra màn hình
	cout << sum(3) << " " << sum(4) << " " << sum(5);
	return 0;
}