#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the points:");
    scanf("%d%d",&x,&y);
    if (x==0 && y!=0) printf("Point of y axis");
    else if(x!=0 && y==0) printf("Point on x axis");
    else if(x==0 && y==0) printf("Point is on Origin");
    else printf("Point is on x y plane");
    return 0;
}