#include<stdio.h>
void StrRevX(char *p)
{
    char *start = p;
    char *end = p;
    char temp ='\0';
    while (*start != '\0')
    {
         start++;
    }
    p--;
    while (*p != '\0')
    {
       printf("%c\t",*p);
       p++;
    }
    p--;
    
}
int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified String is : %s",Arr);

    return 0;

}