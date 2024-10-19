
#include "../libft.h"

int main()
{
    char *str1 = "Hello, World!";
    char *str2 = "Hello, World!";
    char *str3 = "Hello, Universe!";
    char *str4 = "Hello";
    char *str5 = "Hello, WorlD!";
    
    // Comparaciones
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str2, 
    ft_strncmp(str1, str2, 15));
    
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str3, 
    ft_strncmp(str1, str3, 15));
    
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str4, 
    ft_strncmp(str1, str4, 5));
    
    printf("Comparando \"%s\" y \"%s\": %d\n", str1, str5, 
    ft_strncmp(str5, str1, 15));
    
    printf("Comparando \"%s\" y \"%s\": %d\n", str4, str2, 
    ft_strncmp(str4, str2, 5));
    
    printf("Comparando \"%s\" y \"%s\": %d\n", str4, str2, 
    ft_strncmp(str4, str2, 3));
    return (0);
}
