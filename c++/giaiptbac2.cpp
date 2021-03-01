#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a, b, c, denta;
    cout << "nhap a, b, c: ";
    cin >> a >> b >> c;
    denta = b*b - 4*a*c;
    if(a == 0){
        if (b == 0)
        {
            if(c == 0) cout << "pt co vo so nghiem";
            else cout << "pt vo nghiem";
        }
        else cout << "pt co nghiem la x = " << -c / b;   
    }
    else
    {
        if(denta == 0) cout << "pt co nghiem kep x = " << -b / (2*a);
        else if (denta < 0){
            cout << "pt co nghiem phuc la :" << endl;
            cout << "x1 = (" << -b << " - "<< sqrt(-denta) << "i )" <<"/ " << 2*a << endl;
            cout << "x2 = (" << -b << " + "<< sqrt(-denta) << "i )" <<"/ " << 2*a << endl;
        }
        else
        {
            cout << "pt co 2 nghiem phan biet" << endl;
            cout << "x1 = " << (-b-sqrt(denta))/(2*a) << endl;
            cout << "x2 = " << (-b+sqrt(denta))/(2*a) << endl;
        }
    }
    return 0;
}
