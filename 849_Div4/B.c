#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void pathVerifier(const char *string, size_t size);

int main()
{
    int num_cases, size;

    scanf("%d", &num_cases);

    for (int i = 0; i < num_cases; i++)
    {
        scanf("%d", &size);
        char string[size];
        scanf("%s", string);
        fflush(stdin);
        pathVerifier(string, size);
    }
    return 0;
}

void pathVerifier(const char *string, size_t size)
{
    bool check = false;
    int rows = 0, columns = 0;
    for (int i = 0; i < size; i++)
    {
        switch (string[i])
        {
        case ('U'):
            rows++;
            break;

        case ('D'):
            rows--;
            break;

        case ('R'):
            columns++;
            break;

        default:
            columns--;
        }

        if (rows == 1 && columns == 1)
        {
            check = true;
            break;
        }
    }

    if (check == false)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}