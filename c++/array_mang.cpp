#include<iostream>

using namespace std;

int main() {
    // Khai báo mảng a kiểu số nguyên với 10 phần tử
    int a[10]; 
    /*
    // Khai báo mảng a 5 phần tử với giá trị từ 1 tới 5
    int a[5] = {1, 2, 3, 4, 5};
    // Khai báo mảng a 5 phần tử với giá trị từ 1 tới 5
    int a[] = { 1, 2, 3, 4, 5 };
    // Khai báo mảng a 20 phần tử và gán giá trị cho 5 phần tử đầu tiên
    int a[20] = { 1, 2, 3, 4, 5 };
    */
   
    // Khai báo biến lưu trữ tổng các phần tử trong mảng
    int sum = 0;
    // Dùng vòng for để nhập dữ liệu cho các phần tử trong mảng
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // Dùng vòng for để tính tổng các phần tử trong mảng
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    // In ra tổng các phần tử trong mảng
    cout << sum;
    return 0;
}