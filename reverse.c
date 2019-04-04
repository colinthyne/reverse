#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int value;

int main(void)
{
        printf("What number would you like to count down from: ");
        value = get_int();

        if (value < 0)
        {
            return 0;
        }

    for (int i = value; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
}