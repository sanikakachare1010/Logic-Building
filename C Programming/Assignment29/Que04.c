/*
    last occurance 
    else -1
*/
#include<stdio.h>
#include<ctype.h>

int FirstChar(char *str,char ch)
{
    int iPos = -1;
    int iCurrPos = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iCurrPos;
           
        }
        str++;
        iCurrPos++;
    }
    return iPos;
    
    
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);
    printf(" Character location is : %d",iRet);



   return 0;
}