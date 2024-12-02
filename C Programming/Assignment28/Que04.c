#include<stdio.h>
void strlwrx(char *str)
{
    
    while (*str != '\0')
    {
        if(*str >= '0' &&  *str <= '9')
        {
           printf("%c",*str);
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

    return 0;
}