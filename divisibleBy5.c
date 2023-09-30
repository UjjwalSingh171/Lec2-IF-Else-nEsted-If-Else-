#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if (n%5==0) printf("number is divisible");
    else printf("not divisible by 5");
    return 0;
}