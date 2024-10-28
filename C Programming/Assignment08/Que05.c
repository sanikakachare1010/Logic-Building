/*
   Write a program which accept are in square feet and convert it into square meter(1 square feet = 0.0929 Square meter)

   In = 5
   Out = 0.464515
*/
#include<stdio.h>
double SquareMeter(int iValue)
{
    double dSquMeter = 0.0;

    dSquMeter = iValue * 0.0929;
    

    return dSquMeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf(" Area in square feet is : %lf\n",dRet);

    return 0;
}