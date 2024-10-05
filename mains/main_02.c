#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char test_cases[] = {'0', '5', '9', 'A', 'z', '!'};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n--- Testing ft_isdigit function ---\n\n");
    for (int i = 0; i < num_cases; i++)
    {
        if (ft_isdigit(test_cases[i]))
            printf("The character '%c' is a digit.\n", test_cases[i]);
        else
            printf("The character '%c' is NOT a digit.\n", test_cases[i]);
    }
    printf("\n--- Testing has finished ---\n\n");
    return (0);
}

