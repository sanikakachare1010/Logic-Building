#include<stdio.h>
void Display(char ch)
{
    int i =0;

    printf("Decimal number is : %d \n",ch);

    printf("Octal number is: 0%o\n",ch);

    printf("Hexadecimal number is : 0x%X\n",ch); 
}
int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);
    
    Display(cValue);
     return 0;
}