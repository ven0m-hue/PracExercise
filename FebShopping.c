#include <stdio.h>
#include <math.h>

int Discount(int quantity)
{
    int total = quantity * 100; //price per product * no.of product
    if(total > 1000) total = total * .9;

    return total;
}

int CountFebDays(int year)
{
    /*
     A given year is leap year if the given year is divisible by 400 and 4.
     And should not be divisible by 100.
    */
   if((year % 4 == 0)  && (year % 100 != 0) || (year % 400 == 0) ) printf("Feb has 29 days\n");
   else printf("Feb has 28 days"); 

}

int main(int argc, char const *argv[])
{
    int n = 100;

    printf("%d\n", Discount(n));
    CountFebDays(400);

    return 0;
}
