#include<stdio.h>
int ODDFactorial(int iNo)
{
    int i =0,iODDFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            iODDFact = iODDFact * i;
        }
       
    }
    return iODDFact;
}
int main()
{
    int iValue = 0 ;
     int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = ODDFactorial(iValue);

    printf("ODD Factorial of number is  %d",iRet);

    return 0;


}
