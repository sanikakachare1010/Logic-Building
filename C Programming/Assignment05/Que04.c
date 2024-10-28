/*
   write a program which accepts N from user and print all odd Numbers up to N.
   
   Input : 18
   Output : 1 3 5 7 9  11 13
*/
#include<stdio.h>

void Display(int iNo)
{
    int i = 1;

    while(i<=iNo)
    {
        if((i % 2)!=0)
        {
            printf(" %d",i);
        }
       i++; 

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}