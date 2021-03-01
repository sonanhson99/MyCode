#include<iostream>

using namespace std;

int a[50][50],m, n,i,j,hang,cot,gt,d = 0;

void tao(){
    hang = m-1;
    cot = n-1;
    gt = 1;
	while(gt <= m*n){
        for(i = d; i <= cot ;i ++ ) a[d][i] = gt++;
        for(j = d+1; j <= hang; j ++ ) a[j][cot] = gt++;
        for(i = cot -1; i >= d; i--) a[hang][i] = gt++;
        for(j = hang - 1; j > d; j--) a[j][d] = gt++;
        d++;
        hang --;
        cot --;
	}
}
void inkq(){
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout << a[i][j] << "   ";
		}
		cout << endl << endl;
	}
}
int main(){
    cout << "______________________MA TRAN XOAY M x N______________________\n\n";
	cout << "nhap m : ";
	cin >> m;
	cout << "nhap n : ";
	cin >> n;
	tao();
	inkq();
}