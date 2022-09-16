//finalizado
#include <stdio.h>
#include <stdio.h>
#include <limits.h>

void ordena_maior(int vetor[], int tamanho)
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

int soma_maxima(int vetor[], int n)
{
    int i, aux = 0;

    ordena_maior(vetor, n);
    for (i = 0; i < n; i++)
    {
        if (vetor[i] > 0)
            aux = aux + vetor[i];
    }

    return aux;
}

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    printf("%d", soma_maxima(vetor, n));

    return 0;
}