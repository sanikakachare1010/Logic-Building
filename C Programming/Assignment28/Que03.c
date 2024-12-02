#include<stdio.h>
void strlwrx(char *str)
{
    
    while (*str != '\0')
    {
        if(*str >= 'A' &&  *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
    
     
}
int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}