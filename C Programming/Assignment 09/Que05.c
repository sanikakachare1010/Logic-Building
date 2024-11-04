#include<stdio.h>

double SquareMeter(float iValue)
{
    double dMetArea = 0.0;

    dMetArea = iValue * 0.0929;

    return dMetArea;
}
int main()
{
    float iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%f",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is : %lf",dRet);


    return 0;
}