/*
   Accept single digit number from user and print it into  word.

   Input : 9
   Output : Nine

   Input : -3
   Output : Three
*/
#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    switch (iNo)
    {
    case 1:
           printf("One");
           break;
    case 2 : 
           printf("Two");
           break;
    case 3 : 
            printf("Three");
            break;
    case 4 :
            printf("Foure");
            break;
    case 5 :
           printf("Five");
           break;
    case 6 :
             printf("Six");
             break;
    case 7 : 
            printf("Seeven");
            break;
    case 8 : 
             printf("Eight");
             break;
    case 9 : 
            printf("Nine");
    
    default:
          printf("Invalid Number");
          break;
    }

}
int main()
{
    int iValue= 0;

    printf("Enter  number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}