#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0 ,iMin = Arr[0];

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
           if(iMin>Arr[iCnt])
           {
              iMin = Arr[iCnt];
           }
    }
    return iMin;
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

    iRet = Minimum(ptr,iLength);   

    printf("Minimum number is : %d ",iRet);

    free(ptr);

    return 0;

}