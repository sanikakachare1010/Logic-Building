#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0,iDisplay = 0;
    
    for ( iCnt = 1; iCnt <= 8; iCnt++)
    {
       iDisplay = iCnt * 2;
       printf("%d \t",iDisplay);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}