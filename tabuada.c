#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Você quer a tabuada de qual número? ");
    for (int i = 0; i <= 10; i++)
    {
        int produto = n * i;
        printf("%d x %d = %d\n", n, i, produto);
    }
}
