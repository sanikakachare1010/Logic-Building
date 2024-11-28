#include<stdio.h>
void Display(char ch)
{
    
    char  cValue1 = '\0';
    
        if(ch >= 'A' || ch <= 'Z' )
        {
           cValue1 = ch + 32;
           printf("%c",cValue1);
       }
       else if(ch >= 'a' || ch <='z')
       {
           cValue1 = ch - 32;
           printf("%c",cValue1);
       }
       else if()
       {
           printf("%c",ch);
       }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character :");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}