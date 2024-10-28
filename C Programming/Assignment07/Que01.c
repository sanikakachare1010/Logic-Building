/*
   write a program which accept number from user and display below pattern.

   Input : 5
   Output : * * * * * # # # # #
*/
#include<stdio.h>
void Display(int iNo)
{
    int i =1,iCount=0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(i<=iNo)
    {
        printf("\t *");
        i++;
    }
    for (iCount =1;iCount<=iNo;iCount++)
    {
        printf("\t #");
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