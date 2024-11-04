/*
   write a program which accept distance in kilometer and convert it into meter(1 kilo = 100 meter)

*/
#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iDisMeter = 0;

    iDisMeter = iNo * 1000;

    return iDisMeter;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d",iRet);
     return 0;
     
}
