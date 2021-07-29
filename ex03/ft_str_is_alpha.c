int	char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int a = ft_str_is_alpha("Hello");
	int b = ft_str_is_alpha("Hello!");
	int c = ft_str_is_alpha("Hello0");
	int d = ft_str_is_alpha("01234");
	int e = ft_str_is_alpha("");
	printf("Hello: %d\n", a);
	printf("Hello1: %d\n", b);
	printf("Hello0: %d\n", c);
	printf("01234: %d\n", d);
	printf(": %d\n", e);
}
*/
