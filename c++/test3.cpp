#include <bits/stdc++.h>

using namespace std;
int n, k;
int a[100];
void solution(){
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " " << endl;
    }    
}
void Try(int i){
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if(i == k) solution();
        else Try(i + 1);
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}
