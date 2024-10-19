
#include "../libft.h"

int main()
{
    const char *str = "Hello, World!";
    int c = 'o';
    char *result;

    result = ft_strrchr(str, c);
    if (result != NULL)
    {
        write(1, "Ultima aparicion de '", 21);
        write(1, &c, 1);
        write(1, "' en la cadena: ", 16);
        write(1, result, strlen(result));
        write(1, "\n", 1);
    }
    else
    {
        write(1, "Carácter no encontrado.\n", 25);
    }

    return 0;
}
