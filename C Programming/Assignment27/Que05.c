// String revers
#include<stdio.h>

void Reverse(char *str)
{
    char *end = str;
    while (*end != '\0')
    {
       
       end++;
    }
    end--;
    while (end >= str)
    {
       printf("%c",*end);
       end--;
    }
    printf("\n");
    
    
    
}
int main()
{
    char arr[20];
    
    
    printf("Enter String :");
    scanf("%[^'\n']s",arr);
    
    Reverse(arr);

    return 0;
  }