#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize)
{
    int iCnt = 0,iFrequency =0;

     for(iCnt = 0;iCnt<iSize;iCnt++)
    {
         if(Arr[iCnt]==11)
         {
            iFrequency++;
         }
    }
    return iFrequency;
}
int main()
{
    int iCnt = 0,iLength = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter number of element:");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }
    printf("Enter %d elements",iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Enterr %d element \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }
    
    iRet = Frequency(ptr,iLength);

    printf("%d\n",iRet);

    free(ptr);

    return 0;
}