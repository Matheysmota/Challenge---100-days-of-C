#include <stdio.h>
#include <cs50.h>
#include <math.h>s

int main(void)
{
    // declarations.
    float cash;
    int cashAmount, cashConverted;
    // data input.
    do
    {
        cash = get_float("Enter a cash: ");
    }while (cash <= 0);
    //conversion.
    cashConverted = round(cash * 100);
    // looping for count amount of coins needed.
    for (cashAmount = 0; cashConverted != 0; cashAmount++)
    {
        if (cashConverted >= 25)
        {
            cashConverted -= 25;
        }
        else if (cashConverted >= 10)
        {
            cashConverted -= 10;
        }
        else if (cashConverted >= 5)
        {
            cashConverted -= 5;
        }
        else
        {
            cashConverted -= 1;
        }
    }
    // output.
    printf("You will need at least %i coins\n", cashAmount);
}
