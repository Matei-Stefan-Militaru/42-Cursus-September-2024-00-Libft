#include <stdio.h>
#include "../libft.h"

int main(void)
{
    int test_cases[] = {31, 32, 65, 126, 127};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n--- Testing ft_isprint function ---\n\n");
    for (int i = 0; i < num_cases; i++)
    {
        if (ft_isprint(test_cases[i]))
            printf("El valor %d es un carácter imprimible.\n", test_cases[i]);
        else
            printf("El valor %d NO es un carácter imprimible.\n", test_cases[i]);
    }
    printf("\n--- Testing has finished ---\n\n");
    return (0);
}

