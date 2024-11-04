/*
   Write a program which accept temperature in  fahrenheit and convert it into
   celsius.
*/
#include<stdio.h>
double FhtoCs(float fTemp)
{
     double dTemCS = 0.0;

     dTemCS = (fTemp-32) * (5/9);

     printf("%lf",dTemCS);

     return dTemCS;
}
int main()
{
    int fValue = 0;
    double dRet = 0.0;

    printf("Enter Temperature : ");
    scanf("%d",&fValue);

   printf("%d",&fValue);
    dRet = FhtoCs(fValue);
    printf("Temperature in Celcius is : %lf",dRet);

    return 0;
    
}
