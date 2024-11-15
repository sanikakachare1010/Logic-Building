#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt = 0 ;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
           if(Arr[iCnt] >= iNo1 && Arr[iCnt]<= iNo2)
           {
             printf("%d \n",Arr[iCnt]);
           }
    }
}
int main()
{
    int iCnt = 0,iLength = 0,iStar = 0,iEnd = 0;
    int *ptr = NULL;

    printf("Enter number of element :");
    scanf("%d",&iLength);

    printf("Enter Satrting point :");
    scanf("%d",&iStar);

    printf("Enter the ending point");
    scanf("%d",&iEnd);

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

    Range(ptr,iLength,iStar,iEnd);

    free(ptr);

    return 0;

}