#include <stdio.h>
int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%i", &num);
        sum += num;
 
    }while(num != 0);
 
    printf("Total = %d",sum);
    return 0;
}
