#include<Stdio.h>
int Difference(char *str)
{
    int iCntSml = 0,iCntCap = 0,iDiff = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCntSml++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
             iCntCap++;
        }
        str++;

        iDiff = iCntSml - iCntCap;
        
    }
    return iDiff;
    
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);
    
    iRet = Difference(Arr);

    printf(" Differce between Capital Letters and Small Letters : %d",iRet);
    return 0;
}