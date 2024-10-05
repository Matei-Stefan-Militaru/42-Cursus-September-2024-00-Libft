#include <stdio.h>
#include "../libft.h"

int main(void)
{
    const char *test_cases[] = {
        "Hello, world!",
        "",
        "42 Barcelona",
        "Lorem ipsum dolor sit amet.",
        "C programming"
    };
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    printf("\n--- Testing ft_strlen function ---\n\n");
    for (int i = 0; i < num_cases; i++)
    {
        printf("The length of \"%s\" is %zu.\n", test_cases[i], ft_strlen(test_cases[i]));
    }
    printf("\n--- Testing has finished ---\n\n");
    return (0);
}
