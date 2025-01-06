#include <stdio.h>
#include <cs50.h>

// %c
// %f
// %i
// %li
// %s
// bool
// char
// float
// int
// long
// string

int main(void)
{
    // printf("hello world\n");
    string answer = get_string("What's your name ?");
    printf("hello ,%s\n", answer);
}