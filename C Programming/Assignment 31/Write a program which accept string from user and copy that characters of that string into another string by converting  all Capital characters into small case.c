/*
      Write a program which accept string from user and copy that characters of that string into another string by converting  all Capital characters into small case.

*/
#include<stdio.h>
void StrCpy(char *src,char *dest)
{
    while (*src != '\0')
    {
       if(*src >= 'A' && *src <= 'Z')
       {
              *dest =*src +32;
       }
       else
       {
             *dest =*src;
       }
       src++;
       dest++;
    }
    *dest ='\0';
    
}
int main()
{
    char arr[30] = "Marvellous Pythone 2";
    char brr[30];
 
    StrCpy(arr,brr);

    printf("%s",brr);

    
    return 0;
}
