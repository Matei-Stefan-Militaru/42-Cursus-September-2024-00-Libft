#include <stdio.h>
#include "../libft.h"

int main(void)
{
    int test_cases[] = {-1, 0, 65, 127, 128};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n--- Testing ft_isascii function ---\n\n");
    for (int i = 0; i < num_cases; i++)
    {
        if (ft_isascii(test_cases[i]))
            printf("The value %d is an ASCII character.\n", test_cases[i]);
        else
            printf("The value %d is NOT an ASCII character.\n", test_cases[i]);
    }
    printf("\n--- Testing has finished ---\n\n");
    return (0);
}
