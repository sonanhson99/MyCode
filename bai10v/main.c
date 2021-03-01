#include <stdio.h>
#include <stdlib.h>
int min, max;
void nhap(int a[][100] ,int n ,int m)
{
    int i ,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d" ,&a[i][j]);
        }
    }
}
void Sosanh(int a[][100] ,int n ,int m)
{
    int i ,j ;
     max=min=a[0][0];
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<m;j++)
        {
            if(a[i][j]>max) max=a[i][j];
            if(min>a[i][j]) min = a[i][j];
        }
    }
}
void Tong(int a[][100] ,int n ,int m)
{
    int i ,j ,S=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                S= S +a[i][j];
        }
    }
}
int main()
{
   int a[100][100] ,n ,m,i ,j ,S=0;
   printf("Nhap ma tran co nxm :");
   scanf("%d" ,&n);
   scanf("%d" ,&m);
   nhap(a,n,m);
   Sosanh(a,n,m);
   Tong(a,n,m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           printf("%d\t" ,a[i][j]);
       }
    printf("\n");
   }
   printf("\nmax =%d" ,max);
   printf("\nmin =%d" ,min);
   printf("\nTong =%d" ,S);
    return 0;
}
