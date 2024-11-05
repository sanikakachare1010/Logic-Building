#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i =0,iEvenSum =0;

    if(iStart>iEnd || iStart < 0)
    {
        printf("Invalid Range");
    }
    else
    {
        for ( i = iStart; i <=iEnd; i++)
        {
            if(i%2==0)
            {
                iEvenSum = iEvenSum + i;
            }
        }
        
    }
    return iEvenSum;
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0 ,iRet = 0;

    printf("Enter Starting :");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("%d",iRet);

    return 0;

}