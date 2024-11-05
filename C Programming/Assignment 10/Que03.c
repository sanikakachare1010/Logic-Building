/*
   Write a program which accept range from user and return addition of all numbers in between that range.(Range should contains positive numbers only)
   
    Input : 23 35
   output : 212

   Input : -10 2
   output : invalid
*/
#include<stdio.h>
int RangeSum(int iSatr ,int iEnd)
{
    int i = 0,iRangSum = 0;
    if(iSatr>iEnd || iSatr < 0)
    {
        printf("Invalid Range");

    }
    else
    {
      for(i=iSatr;i<=iEnd;i++)
      {
          iRangSum = iRangSum + i;
      }
    }

return iRangSum;
      
}
int main()
{
    int iValue1 =0 ,iValue2 = 0, iRet = 0;

    printf("Enter Staring Point :");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("%d",iRet);

    return 0;

}