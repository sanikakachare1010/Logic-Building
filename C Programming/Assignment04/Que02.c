
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //Write Updater 
    while (iNo> iCnt )
    {
        printf("*");
        iNo--;
    }

}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}