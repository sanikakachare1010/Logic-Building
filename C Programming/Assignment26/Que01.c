/*
   Write a program which display ASCII Table. Table contains symbol,decimal,hexadecimal and octal representation of every member from 0 to 255
*/
#include <stdio.h>

void DisplayASCIITable()
{
    int i;

    printf("ASCII Table:\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("----------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t0x%X\t\t0%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCIITable();
    return 0;
}
