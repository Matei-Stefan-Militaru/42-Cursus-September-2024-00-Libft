#include <stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    char str1[50] = "Hello, world!";
    char str2[50] = "Hello, world!";
    char c = 'X';
    size_t n = 5;

    printf("\n--- Testing ft_memset function ---\n\n");

    printf("Original string: \"%s\"\n", str1);
    ft_memset(str1, c, n);
    printf("Modified string using ft_memset: \"%s\"\n", str1);

    printf("\nUsing standard memset for comparison:\n");
    memset(str2, c, n);
    printf("Modified string using standard memset: \"%s\"\n", str2);

    printf("\n--- Testing has finished ---\n\n");
    return (0);
}
