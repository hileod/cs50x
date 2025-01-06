#include <stdio.h>
#include <cs50.h>

// void meow(void);
void meow(int n);
int get_positive_int(void);

int main(void)
{
    // printf("meow\n");
    // printf("meow\n");
    // printf("meow\n");
    // int i = 3;
    // while (i > 0)
    // {
    //     printf("meow\n");
    //     i--;
    // }

    // int i = 0;
    // while (i < 3)
    // {
    //     printf("meow\n");
    //     i++;
    // }

    //     for (int i = 0; i < 3; i++)
    //     {
    //         meow();
    //     }
    // meow(10);

    // int n;
    // do
    // {
    //     n = get_int("Number: ");
    // } while (n < 1);
    int n = get_positive_int();

    meow(n);
}

// void meow(void)
// {
//     printf("meow\n");
// }
// Get number of meows
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    } while (n < 1);
    return n;
}
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}