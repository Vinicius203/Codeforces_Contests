#include <stdio.h>
#include <stdlib.h>

void integerPoint(int *v, int size, int n);

int main()
{
    int num_cases, num_segments, desired_number;

    scanf("%d", &num_cases);

    for (int i = 0; i < num_cases; i++)
    {
        scanf("%d %d", &num_segments, &desired_number);
        int vetor[num_segments][2];
        integerPoint(vetor, num_segments, desired_number);
    }

    return 0;
}

void integerPoint(int *v, int size, int n)
{
    for (int i = 0; i < size; i++)
    {
    }
}