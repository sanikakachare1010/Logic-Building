#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    int iCnt, iNo, iSum;

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while (iNo != 0)
        {
            iSum += iNo % 10;
            iNo /= 10;
        }

        printf("Sum of digits of is %d\n",iSum);
    }
}  

int main()
{
    int iCnt = 0, iLength = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    DigitsSum(ptr, iLength);   

    free(ptr);

    return 0;
}
