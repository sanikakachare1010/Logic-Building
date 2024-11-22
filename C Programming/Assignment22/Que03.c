
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int  i = 0,j = 0,iNo = 1;
    char ch = 'A';
   for(i=1;i<=iRow;i++)
   {
      ch = 'a';
      iNo = 1;
      for (j = 1; j <= iCol; j++)
      {
        if(i % 2 != 0)
        {
             printf("%c \t",ch);
             ch++;
            
        }
        else
        {
            printf("%d \t",iNo);
            iNo++;
            
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