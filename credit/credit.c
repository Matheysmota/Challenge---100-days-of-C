#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card;
    int card1, card2, card3, card4, card5, card6, card7,
    card8, card9, card10, card11, card12, card13, card14,
    card15, card16, firstSum, secondSum;

    // data input - Card number must be greater than 0.
    do
    {
        card = get_long("Enter a card number: ");
    } while(card < 0);

    //  card digit handling
    card1 = ((card % 100)/10)*2;
    card1 = ( card1 % 100/10) + (card1 % 10);
    card2 = ((card %10000)/1000)*2;
    card2 = (card2 % 100/10) + (card2 % 10);
    card3 = ((card %1000000)/100000)*2;
    card3 = (card3 % 100/10) + (card3 % 10);
    card4 = ((card %100000000)/10000000)*2;
    card4 = (card4 % 100/10) + (card4 % 10);
    card5 = ((card %10000000000)/1000000000)*2;
    card5 = (card5 % 100/10) + (card5 % 10);
    card6 = ((card %1000000000000)/100000000000)*2;
    card6 = (card6 % 100/10) + (card6 % 10);
    card7 = ((card %100000000000000)/10000000000000)*2;
    card7 = (card7 % 100/10) + (card7 % 10);
    card8 = ((card %10000000000000000)/1000000000000000)*2;
    card8 = (card8 % 100/10) + (card8 % 10);
    // Storing firtSum.
    firstSum = card1 + card2 + card3 + card4 + card5 + card6 + card7 + card8;

    card9 = (card % 10);
    card10 = ((card % 1000)/100);
    card11 = ((card % 100000)/10000);
    card12 = ((card % 10000000)/1000000);
    card13 = ((card % 1000000000)/100000000);
    card14 = ((card % 100000000000)/10000000000);
    card15 = ((card % 10000000000000)/1000000000000);
    card16 = ((card % 1000000000000000)/100000000000000);
    // Storing second Sum.
    secondSum = card9 + card10 + card11 + card12 + card13 + card14 + card15 + card16;

    // Getting result.
    int result = firstSum + secondSum;

    int  length = 0;
    long visa = card;
    long masterCard = card;
    long amex = card;

    if ((result % 10)!=0)
    {
        printf("%s\n","INVALIDO");
        return 0;
    }

    while (card > 0)
    {
        card = card/10;
        length++;
    }

    while (visa >= 10)
    {
        visa /= 10;
    }
    if ( visa == 4 && (length == 13 || length == 16))
    {
        printf("%s\n", "VISA");
        return 0;
    }
    while (amex >= 10000000000000)
    {
            amex /= 10000000000000;
    }
    if (length == 15 && (amex == 34 || amex == 37))
    {
        printf("%s\n", "AMEX");
        return 0;
    }
    while (masterCard >= 100000000000000)
    {
        masterCard /= 100000000000000;
    }
    if (length == 16 && (masterCard == 51 || masterCard == 52||
        masterCard == 53 || masterCard == 54 || masterCard == 55))
    {
        printf("%s\n", "MASTERCARD");
        return 0;
    }
    else
    {
        printf("%s\n","INVALIDO");
        return 0;
    }
}