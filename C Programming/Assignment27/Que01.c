#include<stdio.h>
int CounCapital(char *str)
{
    int iCnt = 0;

   
    while (*str !='\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    iRet = CounCapital(arr);

    printf("Count of Capital letters is : %d",iRet);
    return 0;
}
