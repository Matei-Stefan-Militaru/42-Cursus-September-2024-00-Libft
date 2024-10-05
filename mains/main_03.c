#include <stdio.h>
#include "../libft.h"

int main(void)
{
    char test_cases[] = {'A', '5', '!', 'b', 'z', '@'};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n--- Testing ft_isalnum function ---\n\n");
    for (int i = 0; i < num_cases; i++)
    {
        if (ft_isalnum(test_cases[i]))
            printf("The character '%c' is alphanumeric.\n", test_cases[i]);
        else
            printf("The character '%c' is NOT alphanumeric.\n", test_cases[i]);
    }
    printf("\n--- Testing has finished ---\n\n");
    return (0);
}
