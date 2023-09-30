#include<stdio.h>
int main()
{
    int grade;
    printf("Enter Percentage:");
    scanf("%d",&grade);
    if(grade>=80 && grade<=100) printf("GRADE A");
    else if(grade>=60 && grade<=79) printf("GRADE B");
    else if(grade>=40 && grade<=59) printf("Grade C");
    else printf("Fail");
    return 0;
}