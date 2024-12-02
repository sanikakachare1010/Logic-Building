#include<stdio.h>

void DisplaySchedule(char cDiv)
{
    if(cDiv == 'A'|| cDiv == 'a')
    {
       printf("Your Exam Timing is 7 AM."); 
    }
    else if(cDiv == 'B' || cDiv == 'b')
    { 
        printf("Your Exam Timing is 8.30 AM."); 
    }
    else if(cDiv == 'C' || cDiv == 'c')
    { 
        printf("Your Exam Timing is 9.20 AM."); 
    }
    else if(cDiv == 'D' || cDiv == 'd')
    { 
        printf("Your Exam Timing is 10.30 AM."); 
    }
    else
    {
        printf("Invalid division");
    }
}
int main()
{
    char cValue = '\0';
    
    printf("Enter your division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}