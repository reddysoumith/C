#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<45)
    {
        printf("FAIL");
    }
    else if(marks>=45 && marks<60)
    {
        printf("D Grade ");
    }
    else if(marks>=60 && marks<70)
    {
        printf("C Grade");
    }
    else if(marks>=70 && marks<80)
    {
        printf("B Grade");
    }
    else if(marks>80)
    {
        printf("A Grade");
    }
   
}
