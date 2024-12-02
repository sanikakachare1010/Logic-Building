#include<stdio.h>
#include<ctype.h>

int CounChar(char *str,char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
    
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

    iRet = CounChar(Arr,cValue);
    printf(" Character Frequency  is : %d",iRet);



   return 0;
}