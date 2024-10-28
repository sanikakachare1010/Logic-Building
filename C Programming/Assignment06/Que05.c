/*
   write a program which accept number from user and display it table in reverse order
*/
#include<stdio.h>
void TableRev(int iNo)
{
    int i = 0;

    int iRevTable = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
   
    for(i=10;i>=1;i--)
    {
        iRevTable = iNo *i;
        printf("\t %d",iRevTable);

    }
    
}
int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}