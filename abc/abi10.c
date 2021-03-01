#include<stdio.h>
#include<math.h>
#include<windows.h>
int n, m, i, gt;
void nhap(int a[], int u, char ten){
	int i;
	printf("nhap he so da thuc %c: \n", ten);
	for(i=0; i<=u; i++){
		printf("nhap %c[%d]: ",ten , i);
		scanf("%d", &a[i]);
	}
}
void tinh(int a[], char ten){
	int i, x, gt = 0,mu = n;
    printf("\nnhap x: ");
	scanf("%d", &x);
	for(i=0;i<=n;i++){
		gt=gt +a[i]*pow(x,mu);
        mu --;
	}
	printf("\ngia tri cua bieu thuc %c khi x = %d la: %d", ten, x, gt);
}
void heso(int a[],int r, char ten){
	int i;
	printf("\nhe so cua da thuc %c la: ", ten);
	for(i=0;i<=r;i++){
		printf("\na[%d] = %d", i, a[i]);
	}
}
int main(){
	int p[50], q[50], t[50], chon;
    for(i=0;i<50;i++){
        t[i] = 0;
    }
    do
    {
        system("cls");
        printf("\n-----------------MENU-----------------\n");
        printf("1: NHAP HE SO 2 DA THUC P, Q.\n");
        printf("2: TINH GIA TRI DA THUC P.\n");
        printf("3: TINH GIA TRI DA THUC Q.\n");
        printf("4: IN HE SO DA THUC P.\n");
        printf("5: IN HE SO DA THUC Q.\n");
        printf("6: IN HE SO DA THUC P+Q.\n");
        printf("7: THOAT CHUONG TRINH.\n");
        printf("chon chuc nang: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            system("cls");
            printf("1: NHAP HE SO 2 DA THUC P, Q.\n");
            printf("nhap so bac cua da thuc P:");
            scanf("%d", &n);
            nhap(p, n, 'P');
            printf("\nnhap so bac cua da thuc Q:");
            scanf("%d", &m);
            nhap(q, m, 'Q');
            break;
        case 2:
            system("cls");
            printf("2: TINH GIA TRI DA THUC P.\n");
            tinh(p, 'P');
            getch();
            break;
        case 3:
            system("cls");
            printf("3: TINH GIA TRI DA THUC Q.\n");
            tinh(q, 'Q');
            getch();
            break;
        case 4:
            system("cls");
            printf("4: IN HE SO DA THUC P.\n");
            heso(p, n, 'P');
            getch();
            break;
        case 5:
            system("cls");
            printf("5: IN HE SO DA THUC P.\n");
            heso(q, m, 'Q');
            getch();
            break;
        case 6:
            system("cls");
            printf("6: IN HE SO DA THUC P+Q.\n");
            if(m > n){
                for(i=0;i<=m;i++){
                t[i] = q[i] + p[i];
	            }
                heso(t, m, 'T');
            }
            else
            {
                for(i=0;i<=n;i++){
                t[i] = q[i] + p[i];
                }
                heso(t, n, 'T');
            }
            getch();

            break;
        }
    } while (chon != 7);
	return 0;
}
