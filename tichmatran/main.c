#include<stdio.h>
#include<windows.h>
#include<conio.h>
void nhapMatran(int a[][100] ,int b[][100] ,int *n ,int *p ,int *m ,int *l)
{
    int i ,j;
    do{
         printf("nhap dong va cot ma tran A:\n");
         scanf("%d%d" ,n ,p);
         printf("nhap dong va cot ma tran B:\n");
         scanf("%d%d" ,m ,l);
    }
    while((*p)!=(*m));
    printf("nhap ma tran A :\n");
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*p;j++)
        {
            printf("a[%d][%d] =" ,i ,j);
            scanf("%d" ,&a[i][j]);
        }
    }
     printf("\nnhap ma tran B :\n");
     for(i=0;i<*m;i++)
    {
        for(j=0;j<*l;j++)
        {
             printf("b[%d[%d] =" ,i ,j);
            scanf("%d" ,&b[i][j]);
        }
    }
}
void tichMatran(int a[][100] ,int b[][100] ,int c[][100] ,int *n ,int *p ,int *m ,int *l)
{
    int i ,j ,k;
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*l;j++)
        {
            for(k=0;k<*p;k++)
            {
                c[i][j]=0;
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
}
void inMatran(int a[][100] ,int b[][100] ,int c[][100] ,int *n ,int *p ,int *m ,int *l)
{
    int i ,j;
    printf("ma tran A:\n");
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*p;j++)
        {
            printf("%d\t" ,a[i][j]);
        }
        printf("\n");
    }
    printf("ma tran B:\n");
    for(i=0;i<*m;i++)
    {
        for(j=0;j<*l;j++)
        {
            printf("%d\t" ,b[i][j]);
        }
         printf("\n");
    }
    printf("ma tran C:\n");
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*l;j++)
        {
            printf("%d\t" ,c[i][j]);
        }
        printf("\n");
    }
}
void menu()
{
    printf("1,Nhap vao 2 ma tran. \n");
    printf("2,Tinh 2 ma tran.\n");
    printf("3, In ra 3 ma tran.\n");
    printf("4,thoat\n");
}
int main()
{
    int chon ,a[100][100] ,b[100][100] ,c[100][100],n ,p ,m ,l;
    while(1)
    {
        menu();
        scanf("%d" ,&chon);
        switch(chon)
        {
        case 1 :
            {
                system("cls");
                printf("ban da chon 1!\n");
                nhapMatran(a ,b ,&n ,&p ,&m ,&l);
                break;
            }
            case 2 :
            {
                system("cls");
                printf("ban da chon 2!");
                tichMatran(a ,b ,c ,&n ,&p ,&m ,&l);
                break;
            }
            case 3 :
            {
                system("cls");
                printf("ban da chon 3!\n");
               inMatran(a ,b ,c ,&n ,&p ,&m ,&l);
                break;
            }
            case 4 :
                return 0;
            default :
                printf("moi ban nhap lai");
        }
    }
}
