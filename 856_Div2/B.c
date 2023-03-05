#include <stdio.h>
#include <stdlib.h>

void verifica(int size, int *vetor);

int main()
{
    int num_cases, size, aux = 0;

    scanf("%d", &num_cases);

    while (aux < num_cases)
    {
        scanf("%d", &size);
        int vetor[size];

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &vetor[i]);
        }

        verifica(size, vetor);

        for (int i = 0; i < size; i++)
        {
            if (i == size - 1)
            {
                printf("%d", vetor[i]);
            }
            else
            {
                printf("%d ", vetor[i]);
            }
        }

        printf("\n");

        aux++;
    }

    return 0;
}

void verifica(int size, int *vetor)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (((*(vetor + i + 1)) % (*(vetor + i))) == 0)
        {
            *(vetor + i) += 1;
            verifica(size, vetor);
        }
    }
}
