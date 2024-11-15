#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0 ,iProduct = 1;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
           if(Arr[iCnt] % 2 != 0)
           {
              iProduct = iProduct *Arr[iCnt];
           }
    }
   
  return iProduct;
}
int main()
{
    int iCnt = 0,iLength = 0,iRet =0;
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

    iRet = Product(ptr,iLength);

    printf("Product is %d",iRet);

    free(ptr);

    return 0;

}