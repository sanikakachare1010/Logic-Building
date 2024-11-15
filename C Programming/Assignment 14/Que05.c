#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iSize,int iNo)
{
      int iCnt = 0,iFrequency =0;

      for (iCnt = 0; iCnt < iSize; iCnt++)
      {
         if(Arr[iCnt] == iNo)
         {
            iFrequency++;
         }
      }
    return iFrequency;  
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

    iRet = Frequency(ptr,iLength,iValue);

    printf("%d",iRet);

    free(ptr);

    return 0;


}