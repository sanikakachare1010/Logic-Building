#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    
    for ( iCnt = 1; iCnt <= 4; iCnt++)
    {
       printf(" #\t %d \t *\t",iCnt);
       
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