
#include<stdio.h>
void Pattern(int iRow ,int iCol)
{
    int  i = 0,j = 0;
    char ch = 'A',ch1 = 'a';
   for(i=1;i<=iRow;i++)
   {
      ch = 'A';
      ch1 = 'a';
      for (j = 1; j <= iCol; j++)
      {
        if(i % 2 != 0)
        {
             printf("%c \t",ch);
             ch++;
            
        }
        else
        {
            printf("%c \t",ch1);
            ch1++;
            
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