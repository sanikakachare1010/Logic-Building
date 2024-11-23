/*
    1  2  3  4
       2  3  4
          3  4
             4 
           
   
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i, j;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" \t"); 
        }
        for (j = i; j <= iCol; j++)
        {
            printf("%d\t", j);  
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
