
#include<stdio.h>


void nhap(int a[50], int n){
    for(int i = 0; i < n; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void sapxep(int a[50], int n){
    int x;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}
 int main(){
    int a[50], n;
    printf("nhap so phan tu tu trong mang: ");
    scanf("%d", &n);
    nhap(a, n);
    sapxep(a, n);
    printf("max = %d\n", a[0]);
    printf("min = %d", a[n- 1]);
 }


#include<stdio.h>
void nhap(int a[50], int n){
    for(int i = 0; i < n; i++){
        printf("nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
int main(){
    int a[50], n, max, min;
    printf("nhap so phan tu tu trong mang: ");
    scanf("%d", &n);
    nhap(a, n);
    max = min = a[0];
    for(int i = 0; i < n; i++){
        if(max < a[i]) max = a[i];
    }
    printf("max = %d\n", max);
    for(int i = 0; i < n; i++){
        if(min > a[i]) min = a[i];
    }
    printf("min = %d\n", min);
}

