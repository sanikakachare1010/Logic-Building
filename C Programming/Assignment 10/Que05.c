#include<stdio.h>
void RangeDisplayRev(int iStart,int iEnd)
{
    int i = 0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    for ( i = iEnd; i >= iStart; i--)
    {
        printf(" %d",i);
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("Enter Starting point :");
    scanf("%d",&iValue1);
    
    printf("Enter Ending point :");
    scanf("%d",&iValue2);

      RangeDisplayRev(iValue1,iValue2);

      return 0 ;
}