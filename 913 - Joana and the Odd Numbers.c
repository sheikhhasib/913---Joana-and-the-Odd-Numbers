#include<stdio.h>
int main(){
    long long int h,m;
    while(scanf("%lld",&h)==1)
    {
        m = (((h*(h+2)/2)*3)-6);
        printf("%lld\n",m);
    }
    return  0;
}
