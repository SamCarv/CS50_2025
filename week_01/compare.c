#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    printf("What's x? ");
    scanf("%d", &x);

    printf("What's y? ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x is less then y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}