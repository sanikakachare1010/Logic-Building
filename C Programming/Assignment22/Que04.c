
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int  i = 0,j = 0,iNo1 = 1,iNo2 = -1;

   for(i=1;i<=iRow;i++)
   {
      iNo1 = 1;
      iNo2 = -1;
      for (j = 1; j <= iCol; j++)
      {
        if(i % 2 != 0)
        {
             printf("%d \t",iNo1);
             iNo1++;
            
        }
        else
        {
            printf("%d \t",iNo2);
            iNo2--;
            
        }
      }
      
       printf("\n");
   }
  

}
int main()
{
    int iValue1 = 0,iValue2;

    printf("Enter number of rows and Columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}