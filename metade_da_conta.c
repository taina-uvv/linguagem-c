#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double comida;
    do
    {
        comida = get_double("Valor da comida: ");
    }
    while (comida < 10 || comida > 999.99);

    double imposto;
    do
    {
        imposto = get_double("Porcentagem de impostos: ");
    }
    while (imposto < 0.00 || imposto > 100.00);

    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    double valor_com_imposto = comida + (comida * (imposto / 100.0));
    double valor_total = valor_com_imposto + (valor_com_imposto * ((double) gorjeta / 100.0));
    double total_por_pessoa = valor_total / 2;

    printf("Cada um pagará R$ %.2f!\n", total_por_pessoa);
}
