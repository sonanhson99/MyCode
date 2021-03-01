#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d = 0;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 2; i ++){
        for(int j = i + 1; j < n - 1; j ++){
            for(int k = j + 1; k < n; k ++){
                if (arr[i] >= (arr[j]*2) && arr[j] >= (2*arr[k])) {
                    d++;
                }
            }
        }
    }
    cout << d;
}