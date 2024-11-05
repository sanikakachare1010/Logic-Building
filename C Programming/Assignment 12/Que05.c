#include<stdio.h>
int CountDiff(int iNo)
{
     int iDigit = 0, iCntDiff = 0;
     int iODDSum = 0 , iEvenSum = 0;

     while (iNo>0)
     {
         iDigit = iNo % 10;

         if(iDigit % 2 == 0)
         {
             iEvenSum = iEvenSum + iDigit;
         }
         else
         {
            iODDSum = iODDSum + iDigit;
         }
         iNo = iNo /10;

         iCntDiff = iEvenSum - iODDSum;
        
     }
     return iCntDiff;
     
}
int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

     return 0;
}