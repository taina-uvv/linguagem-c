#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    do
    {
        altura = get_int("Insira um número de 1 a 8: ");
    }
    while(altura < 1 || altura > 8);


    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura - i - 1; j++)
        {
            printf(" ");
        }
        for (int c = 0; c <= i; c++)
        {
            printf("#");
        }
        printf("\n");
    }

}
