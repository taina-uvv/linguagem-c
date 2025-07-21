#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double peso = get_double("Informe seu peso (kg): ");

    if (peso < 40 || peso > 200)
    {
        while (peso < 40 || peso > 200)
        {
            peso = get_double("Informe seu peso (kg): ");
        }
    }

    double altura = get_double("Informe sua altura (m): ");

    if (altura < 1.40 || altura > 2.50)
    {
        while (altura < 1.40 || altura > 2.50)
        {
            altura = get_double("Informe sua altura (m): ");
        }
    }
    double calculo = peso / (altura * altura);
    char * classificacao;
    if (calculo < 16)
    {
        classificacao = "Magreza grau III";
    }
    else if (calculo < 17)
    {
        classificacao = "Magreza grau II";
    }
    else if (calculo < 18.5)
    {
        classificacao = "Magreza grau I";
    }
    else if (calculo < 25)
    {
        classificacao = "Peso adequado";
    }
    else if (calculo < 30)
    {
        classificacao = "Pré-obeso";
    }
    else if (calculo < 35)
    {
        classificacao = "Obesidade grau I";
    }
    else if (calculo < 40)
    {
        classificacao = "Obesidade grau II";
    }
    else
    {
        classificacao = "Obesidade grau III";
    }
    printf("IMC: %.2f; Classificação: %s.\n", calculo, classificacao);

}
