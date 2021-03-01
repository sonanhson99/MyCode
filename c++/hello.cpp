#include <iostream>

using namespace std;

int main()
{
    string name, address;
    getline(cin, name);
    getline(cin, address);
    cout << "Name: " << name << endl;
    cout << "Address: " << address;
    cout << "nhap ten cua ban: ";
    cin >> name;
    cout << "Hello World!" << endl << "helo " << name << endl;
    system("pause");
    return 0;
}