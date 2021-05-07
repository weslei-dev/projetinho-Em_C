#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct indice_de_massa_coporal
    {
        char nome[30];
        float peso;
        float altura;
        float media;
    };

    struct indice_de_massa_coporal paciente;

    printf("\n\n nome do aluno:\n");
    fgets (paciente.nome , 30, stdin);

    printf("informe o seu peso:\n");
    scanf("%f", &(paciente.peso));

    printf("informe a sua altura:\n");
    scanf("%f", &(paciente.altura));

    paciente.media = (paciente.peso / (paciente.altura * paciente.altura));

    if(paciente.media < 18.5)
    {
        printf("seu imc é %f, e voce esta abaixo do peso ideal", paciente.media);
    }

    if(paciente.media >= 18.5 && paciente.media < 25)
    {
        printf("seu imc é %f, voce esta no peso ideal, parabens", paciente.media);
    }

    if(paciente.media>= 25 && paciente.media < 30)
    {
        printf("seu imc é %f, e voce esta com sobrepeso", paciente.media);
    }

    if(paciente.media >= 30 && paciente.media < 35)
    {
        printf("seu imc é %f, e voce esta na obesidade grau 1", paciente.media);
    }

    if(paciente.media >= 35 && paciente.media < 40)
    {
        printf("seu imc é %f, e voce esta na obesidade grau 2", paciente.media);
    }

    if(paciente.media > 40)
    {
        printf("seu imc é %f, e voce esta na obesidade grau 3", paciente.media);
    }

    printf("Hello world!\n");
    return 0;
}
