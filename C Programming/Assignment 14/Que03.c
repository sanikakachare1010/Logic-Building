#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[],int iSize)
{
    int iCnt = 0;
    BOOL bCount = FALSE;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
         if(Arr[iCnt]==11)
         {
            bCount = TRUE;
         }
    }
    return bCount;   
}
int main()
{
    int iCnt = 0,iLength = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of element :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }
    printf("Enter %d elements: \n",iLength);
    for ( iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d element :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
          
    }
    
    bRet = Check(ptr,iLength);

    if (bRet == TRUE)
    {
        printf("11 is present");
    }   
    else
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;

}