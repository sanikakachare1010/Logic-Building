#include<stdio.h>
int DollarToINR(int iNo)
{
    int iINR = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
 
    iINR = iNo * 70;

return iINR;
    
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

   iRet =  DollarToINR(iValue);

   printf("Value of INR is %d :",iRet);

    return 0;


}