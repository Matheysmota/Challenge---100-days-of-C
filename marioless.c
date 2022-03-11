#include <stdio.h>
#include <cs50.h>


int main (void)
{

    int height;

    // input data
    do
    {
        height = get_int("Enter a height: ");
    }while(height < 1 || height > 8);
    // init looping
    for(int size = 0; size < height ; size++)
    {
        for(int space = 0; space < height - size - 1; space++)
        {
            printf(" ");
        }
        //first mario obstacle
        for (int column = 0; column <= size; column++)
        {
            printf("#");
        }
        printf("  ");
        //second mario obstacle
        for (int column = 0; column <= size; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}
