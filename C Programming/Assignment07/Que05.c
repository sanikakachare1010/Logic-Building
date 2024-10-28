#include<stdio.h>
int FactorialDiff(int iNo)
{
    int i =0,iODDFact = 1,iEvenFact = 1;
    int iFactDiff =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2 ==0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iODDFact = iODDFact * i;
        }

        
    }
    iFactDiff = iEvenFact - iODDFact;
       
    return  iFactDiff;
}
int main()
{
    int iValue = 0 ;
     int iRet = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference Factorial of number is  %d",iRet);

    return 0;


}
