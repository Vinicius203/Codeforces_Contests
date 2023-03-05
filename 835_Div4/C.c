#include <stdio.h>
#include <stdlib.h>

void fillVectorStrength(long long int *v, int tam);
void strengthDifference(long long int *v, long long int *final_v, int tam);
int findMax(long long int *v, int tam, int pos);

int main()
{
    int num_cases, num_participants;

    scanf("%d", &num_cases);

    for (int caso = 0; caso < num_cases; caso++)
    {
        scanf("%d", &num_participants);
        long long int participant_strength[num_participants], strength_difference[num_participants];
        fillVectorStrength(participant_strength, num_participants);
        strengthDifference(participant_strength, strength_difference, num_participants);

        for (int j = 0; j < num_participants; j++)
        {
            printf("%lld ", strength_difference[j]);
        }
        printf("\n");
    }

    return 0;
}
void fillVectorStrength(long long int *v, int tam)
{
    for (int strength = 0; strength < tam; strength++)
    {
        scanf("%lld", &(*(v + strength)));
    }
}

void strengthDifference(long long int *v, long long int *final_v, int tam)
{
    int max = 0;
    for (int i = 0; i < tam; i++)
    {
        max = findMax(v, tam, i);
        *(final_v + i) = (*(v + i) - *(v + max));
    }
}

int findMax(long long int *v, int tam, int pos)
{
    int max = 0, index;
    for (int i = 0; i < tam; i++)
    {
        if (*(v + i) > max && i != pos)
        {
            max = *(v + i);
            index = i;
        }
    }
    return index;
}
