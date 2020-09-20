#include <stdio.h>

int main() {
   int first_number;
   int second_number;
   
   printf("Enter First Number : ");
   scanf("%d",&first_number);
   
   
   printf("Enter Second Number : ");
   scanf("%d",&second_number);
   
   printf("First Number Is : %d \n", first_number);
   
   printf("Second Number Is : %d \n", second_number);
   
   printf("Sum of %d  and %d Is : %d \n", first_number,second_number,first_number+second_number);
   printf("Difference of %d  and %d Is : %d \n", first_number,second_number,first_number-second_number);
   printf("Product of %d  and %d Is : %d \n", first_number,second_number,first_number*second_number);
   printf("On Dividing of %d  and %d Quotient Is : %d \n", first_number,second_number,first_number/second_number);
   printf("On Dividing of %d  and %d Quotient Is : %d \n", first_number,second_number,first_number%second_number);
   
    return 0;
}