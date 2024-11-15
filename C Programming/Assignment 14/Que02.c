#include<stdio.h>
#include<stdlib.h>
int FrequencyDifferance(int Arr[],int iSize)
{
    int iCnt =0,iEvenFreq = 0,iOddFreq=0;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
           iEvenFreq++;
        }
        else
        {
            iOddFreq++;
        }
    }
    return iEvenFreq - iOddFreq;
}
int main()
{
    int iCnt = 0,iRet = 0,iLength =0 ;
    int *ptr = NULL;

    printf("Enter number of element :");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength* sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memmory");
        return -1;
    }

    printf("Enter %d elements \n",iLength);

    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FrequencyDifferance(ptr,iLength);

    printf("Differance between Even Frequency and Odd Frequency is :%d",iRet);

    free(ptr);
     
    return 0;
}