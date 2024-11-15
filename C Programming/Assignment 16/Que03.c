#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0 ,iMax = 0,iMin = Arr[0],iDiff =0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
           if(Arr[iCnt]>iMax)
           {
              iMax = Arr[iCnt];
           }
           else
           {
              iMin = Arr[iCnt];
           }
    }
    iDiff = iMax - iMin;

    return iDiff;
}
int main()
{
    int iCnt = 0,iLength = 0,iRet = 0 ;
    int *ptr = NULL;

    printf("Enter number of element :");
    scanf("%d",&iLength);

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

    iRet = Difference(ptr,iLength);   

    printf("Difference  is : %d ",iRet);

    free(ptr);

    return 0;

}