#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
     int iCnt = 0;

     for(iCnt =0 ; iCnt <iSize;iCnt++)
     {
        if(Arr[iCnt] %11 == 0 )
        {
            printf("Elements multiples by 11 is :%d\n",Arr[iCnt]);
        }
     }
}

int main()
{
    int iCnt = 0, iLength = 0;
    int *ptr = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iLength);

    ptr = ((int *)malloc(iLength * sizeof(int)));

   if(ptr== NULL)
   {
     printf("Unable to allocate memory");
     return -1;
   }
   printf("Enter %d elements \n",iLength);

  for ( iCnt = 0; iCnt < iLength; iCnt++)
  {
    printf("Enter element : %d \n",iCnt+1);
    scanf("%d",&ptr[iCnt]);

  }
  Display(ptr,iLength);

  free(ptr);

  return 0;
}