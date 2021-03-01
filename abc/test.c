#include<stdio.h>
#include<conio.h>
void nhap(int a[100], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

}
int kq( int n){
    int i;
    for( i = 2; i < n; i++){
        if(n%i == 0) break;
    }
    return i;
}
int main(int argc, char const *argv[])
{
    int  n, a[100];
    printf("nhap n: ");
    scanf("%d" ,&n);
    nhap(a, n);
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= a[i]; j++){
            if(j == 1) { printf("%d ", j); continue;}
            printf("%d ", kq(j));
        }
        printf("\n");
    }
    getch();
    return 0;
}