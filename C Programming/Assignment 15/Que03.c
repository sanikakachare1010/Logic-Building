#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iLastOcc = -1;

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iLastOcc = iCnt;
        }
    }
    return iLastOcc;
     
}

int main()
{
    int iCnt = 0,iLength = 0,iRet = 0,iValue = 0;
    int *ptr = NULL;

    printf("Enter number of element :");
    scanf("%d",&iLength);

    printf("Enter the number :");
    scanf("%d",&iValue);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d element :\n",iLength);
   

    for(iCnt =0;iCnt<iLength;iCnt++)
    {
        printf("Enter element %d :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = LastOcc(ptr,iLength,iValue);

    
    if(iRet == -1)
    {
        printf("Number not Found");
    }
    else
    {
        printf("Last occurrence of number is %d",iRet);
    }
    free(ptr);

    return 0;

}