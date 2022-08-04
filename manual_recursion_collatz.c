#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int counter = 0;

int main(void)
{
    int n = get_int("n: ");

    printf("%i\n", collatz(n));

}



int collatz(int n)
{

    if (n == 1)
        {
            return counter;
        }

    if (n % 2 == 0)
    {
        n /= 2;

        collatz(n);

        counter++;
    }

    else
        {
            n = 3 * n + 1;

            collatz(n);

            counter++;

        }

    return counter;

}
