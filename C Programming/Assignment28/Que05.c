#include<stdio.h>
int CountWhite(char *str)
{
    int iSpace = 0;
    while (*str != '\0')
    {
        if(*str == ' ')
        {
           iSpace++;
        }
        str++;
    }
    return iSpace;  
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    iRet =  CountWhite(arr);

    printf("Count of whitespaces is : %d",iRet);

    return 0;
}