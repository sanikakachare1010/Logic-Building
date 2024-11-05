/*
    write a program which accept range from user and display all even numbers in betwwen that range.

*/
#include<stdio.h>
void RangeDisplayEven(int iStart,int iEnd)
{
    int i =0;
    if(iStart>iEnd)
    {
        printf("Envalid Range");
    }
    for(i = iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            printf(" %d",i);
        }
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter a Staring Point :");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}