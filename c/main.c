#include<stdio.h>

int main(){
    float gdp[200], t;
    int nam = 2014;
    do{
        printf("nhap GDP nam %d: ", nam);
        scanf("%f", &gdp[nam - 2014]);
        printf("%f", gdp[nam - 2014]);
        nam ++;
        t = 2*gdp[0];

    }while(gdp[nam - 2014]> t);
}
