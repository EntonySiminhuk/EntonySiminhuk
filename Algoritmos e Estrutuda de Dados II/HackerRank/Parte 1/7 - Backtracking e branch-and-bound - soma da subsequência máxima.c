#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int subsequencia(int v[], int ini, int fim)
{
    int m, i, maiore, maiord, maior, s;

    if (fim <= ini)
    {
        return v[ini];
    }
    m = (ini + fim) / 2;

    maiore = -100;
    s = 0;
    for (i = m; i >= ini; i--)
    {
        s += v[i];
        if (s > maiore)
        {
            maiore = s;
        }
    }

    maiord = -100;
    s = 0;
    for (i = m + 1; i <= fim; i++)
    {
        s += v[i];
        if (s > maiord)
        {
            maiord = s;
        }
    }

    maior = max(subsequencia(v, ini, m), subsequencia(v, m + 1, fim));

    return max(maior, maiore + maiord);
}

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    printf("%d", subsequencia(v, 0, n - 1));
    return 0;
}
