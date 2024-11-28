#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVoWel(char * str)
{
    BOOL bChk = FALSE;

     while (*str != '\0')
     {
        if(*str == 'A' || *str == 'E' ||*str =='I' ||*str == 'O'||*str == 'U' && *str == 'a'||*str =='e'||*str=='i'||*str =='o'|| *str =='u')
        {
             bChk = TRUE;
             break;
        }
        str++;
     }
     return bChk;
     
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVoWel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }
    return 0;
}