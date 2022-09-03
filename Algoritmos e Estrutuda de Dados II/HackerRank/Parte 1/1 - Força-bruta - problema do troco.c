// finalizado
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordena_decrescente(int vetor[], int tamanho)
{
    int i, j;
    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = i; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int qtd_moedas2(int v[], int n, int troco)
{
    int aux = 0;
    int i;

    for (i = 0; (i < n) && (troco > 0); i++)
    {
        aux = troco;
        while (troco - v[i] >= 0)
        {
            troco = troco - v[i];
            aux = v[i];
            printf("%d", aux);
            printf("\n");
        }
    }
    return 0;
}

int main()
{

    int moeda_tamanho, i, v_troco, x;

    scanf("%d", &v_troco);
    scanf("%d", &moeda_tamanho);
    x = v_troco;

    int vetor[moeda_tamanho];

    for (i = 0; i < moeda_tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    ordena_decrescente(vetor, moeda_tamanho);
    qtd_moedas2(vetor, moeda_tamanho, v_troco);
}
