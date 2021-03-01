#include <iostream>
#include <math.h>

using namespace std;

int kt(int x){
    int arr[10], n, a, test;
    do
    {
        test = 0;
        n = 0;
        a = x;
            for (int i = 0; i < 10; i++)
        {
            arr[i] = a % 10;
            a = a / 10;
            n ++;
            if(a == 0) break;
        }
        if (arr[0] <= arr[1])
        {
            for (int i = 1; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if(arr[i] > arr[j]){
                        test = 1;
                        break;
                    }
                }
            }
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if(arr[i] < arr[j]) {
                        test = 1;
                        break;
                    }
                }
            }
        }
        x++;
    } while (test == 1);
    return x;
}
int main()
{
    cout << kt(45747777);
}