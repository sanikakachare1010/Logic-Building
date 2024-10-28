/*
   Accept one number from user if number less than 10 then print "Hello" otherwiase print "Demo".
*/
#include<stdio.h>
void Display(int iNo)
{
    if(10<iNo)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;
     
    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}