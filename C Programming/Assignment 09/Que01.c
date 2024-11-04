/*
    Write a program which accept radius of circle from user and calculate its area.consider value of  PI = 3.14 (Area = PI * Radius *Radius)
    INput : 5.3
    Output : 88.2026
*/
#include<stdio.h>

double CircleArea(float fRadius)
{
    
double  dArea = 0.0;

   dArea =  3.14 * fRadius * fRadius ;
   
    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%lf",dRet);

    return 0;
}