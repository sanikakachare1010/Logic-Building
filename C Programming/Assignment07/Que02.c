/*
    Accept amount in US dollar and return its corresponding value in Indian currency.
    consider 1$ as 70 rupees

    Input : 10
    Output : 700
*/
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0 ;

    iINR = iNo * 70;

    return iINR;

}
int main()
{
    int iValue = 0 ;
     int iRet = 0 ;

    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;


}

