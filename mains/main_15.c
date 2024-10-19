
#include "../libft.h"

void	ft_putstr(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	print_result(const char *test_str, char c)
{
	char	*result;
	int		pos;

	ft_putstr("Buscando '");
	write(1, &c, 1);
	ft_putstr("' en: \"");
	ft_putstr(test_str);
	ft_putstr("\"\n");
	result = ft_strchr(test_str, c);
	if (result != NULL)
	{
		pos = result - test_str;
		ft_putstr("Encontrado en posicion: ");
		ft_putnbr(pos);
		ft_putstr("\n");
	}
	else
		ft_putstr("No encontrado\n");
	ft_putstr("---------------\n");
}

int	main(void)
{
	const char	*test_str;

	test_str = "Hola Mundo";
	ft_putstr("TEST FT_STRCHR\n");
	ft_putstr("===============\n");
	print_result(test_str, 'H');		// Prueba inicio 
	print_result(test_str, 'M');		// Prueba medio 
	print_result(test_str, 'o');		// Prueba duplicado 
	print_result(test_str, '\0');	// Prueba null terminator
	print_result(test_str, 'z');		// Prueba no encontrado 
	return (0);
}
