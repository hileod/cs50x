#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    // int x = get_int("x: ");

    // // Prompt user for y
    // int y = get_int("y: ");

    // // Add numbers
    // int z = x + y;

    // // Perform addition
    // printf("%i\n", z);

    long dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%li. Double it and give to next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
    printf("Here's $%li.\n", dollars);
}