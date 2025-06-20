/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Tainá Ramos de Jesus Meirelles
 *    Matrícula:202527909
 *    Turma:CC1Nb
 *    Email:tainaramosmeirelles@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

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
