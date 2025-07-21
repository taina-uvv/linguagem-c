#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string fulano = get_string("Qual o seu nome? ");
    printf("Olá, %s!\n", fulano);
    return 0;
}
