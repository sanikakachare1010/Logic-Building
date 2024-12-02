/*
  Accept character from user and check whether it is alphabet or not(A-Z ).c
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z') )
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
    
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet ==TRUE)
    {
       printf("It is Capital character ");
    }
    else 
    {
        printf("It is Capital not a character");
    }
    
    return 0;
}