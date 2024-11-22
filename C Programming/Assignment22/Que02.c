#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNoEven = 2, iNoOdd = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            // For even rows
            for (j = 1; j <= iCol; j++)
            {
                printf("%d \t", iNoOdd);
                iNoOdd += 2;
            }
            iNoOdd = 1; // Reset for the next even row
        }
        else
        {
            // For odd rows
            for (j = 1; j <= iCol; j++)
            {
                printf("%d \t", iNoEven);
                iNoEven += 2;
            }
            iNoEven = 2; // Reset for the next odd row
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
