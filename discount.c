#include<stdio.h>
#include<cs50.h>

double price(double price1, double discount1);


int main(void)
{
    double price1 = get_double("price ");

    double discount = get_double("discount ");

    double sale = price(price1 , discount);

printf("%.2f \n", sale );

}

double price(double price1, double discount1)

{

    return  (1 - discount1/100) * price1;

}
