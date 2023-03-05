#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int num_cases, v[3];

    scanf("%d", &num_cases);

    for (int i = 0; i < num_cases; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &v[j]);
        }
        qsort(v, 3, sizeof(int), compara);
        printf("%d\n", v[1]);
    }
    return 0;
}
