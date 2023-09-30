#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter the Age of Ram , Shyam and Ajay:");
    scanf("%d%d%d",&ram,&shyam,&ajay );
    if(ram>shyam && ajay>shyam) printf("Shyam is Younger");
    else if (shyam>ram && ajay>ram) printf("Ram is Younger");
    else printf("Ajay is Younger");
    return 0;
}