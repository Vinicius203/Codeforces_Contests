#include <stdio.h>
#include <stdlib.h>

void sequence(int seconds);

int main()
{
    int num_cases, seconds;

    scanf("%d", &num_cases);

    for (int caso = 0; caso < num_cases; caso++)
    {
        scanf("%d", &seconds);
        sequence(seconds);
    }

    return 0;
}

void sequence(int seconds)
{
    int v[seconds], maximum[seconds], minimum[seconds];
    int maximum_index = 0, negative_count = 0, positive_count = 1;
    int index = 1;

    for (int num = 0; num < seconds; num++)
    {
        scanf("%d", &v[num]);
        if (v[num] >= 0)
        {
            maximum[maximum_index] = positive_count;
            positive_count++;
            maximum_index++;
        }
        else
        {
            negative_count++;
        }
    }

    for (int i = 0; i < negative_count; i++)
    {
        maximum[maximum_index] = maximum[maximum_index - 1] - 1;
        maximum_index++;
    }

    for (int i = 0; i < seconds; i++)
    {
        if (i % 2 != 0 && negative_count > 0)
        {
            minimum[i] = 0;
            negative_count--;
        }
        else if (i % 2 == 0 && negative_count > 0)
        {
            minimum[i] = 1;
        }
        else
        {
            minimum[i] = index;
            index++;
        }
    }

    for (int i = 0; i < maximum_index; i++)
    {
        printf("%d ", maximum[i]);
        if (i == maximum_index - 1)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < maximum_index; i++)
    {
        printf("%d ", minimum[i]);
        if (i == maximum_index - 1)
        {
            printf("\n");
        }
    }
}