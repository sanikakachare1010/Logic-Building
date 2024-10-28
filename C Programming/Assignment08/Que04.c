/*
   write a program which accept temp in frhrenheit and convert it into
   celsius(1 celsius = (Fahrenheit -32)* (5/9))
   Input : 10
   output : -12.2222
*/
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTemCel = 0.0;

    dTemCel = (fTemp -32) * (5.0/9.0);

    return dTemCel;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsisus is : %lf",dRet);

    return 0;
}