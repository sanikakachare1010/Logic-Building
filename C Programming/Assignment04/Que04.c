/*
   Accept two numbers from user and display first number in second number of times.

   Input : 12 5
   Output : 12 12 12 12 12
*/
#include<stdio.h>

void Display (int iNo,int iFrequency)
{
    
   int iNt =0;

   for(iNt =1;iNt<=iFrequency;iNt++)
   {
      printf(" %d",iNo);
   }

}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:");
    scanf("%d",&iValue);
    
    printf("Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
