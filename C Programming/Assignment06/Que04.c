/*
   write a program which accept number from user and display its table.
*/
#include<stdio.h>

void Table(int iNo)
{
    int i =1;
    int iTab =1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=10;i++)
    {
        iTab = iNo * i;
         printf("\t %d",iTab);
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}