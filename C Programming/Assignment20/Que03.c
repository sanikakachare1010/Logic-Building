/*
     iRow = 3  iCol = 5

     5  4  3  2  1
      5  4  3  2  1
      5  4  3  2  1
        
*/
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int  i = 0,j = 0;
   for(i=1;i<=iRow;i++)
   {

      for (j = iCol; j >= 1; j--)
      {
         printf("%d \t",j);

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