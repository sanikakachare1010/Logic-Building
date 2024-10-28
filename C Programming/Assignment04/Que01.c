/*
  Accept one number frome user and print that number of * on screen.
*/
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //Write Updater
    while(iCnt< iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iVAlue = 0;

    printf("Enter a Number :");
    scanf("%d",&iVAlue);

    Display(iVAlue);

    return 0;
}