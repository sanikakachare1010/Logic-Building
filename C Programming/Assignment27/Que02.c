#include<Stdio.h>
int CountSmall(char *str)
{
    int iCnt =0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountSmall(Arr);

    printf("Count of Small Letters is : %d",iRet);
    return 0;
}