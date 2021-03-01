#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a, b[4] = { 0, 0, 0, 0} , x;
    cin >> a;
    do
    {
        int s = a;
        x = 1;
        for (int i = 0; i < 4; i++)
        {
            b[i] = s % 10;
            s = s / 10;
        }
        for (int i = 0; i < 4; i++)
        {
            if (b[i] != 0)
        {
            x *= b[i];
        }
        }
        a = x;
        
    } while (a > 10 );
    cout << x;
    return 0;
}
