int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_upper(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int a = ft_str_is_uppercase("hello");
	int b = ft_str_is_uppercase("HELLO!");
	int c = ft_str_is_uppercase("HELLO0");
	int d = ft_str_is_uppercase("HELLO");
	printf("hello: %d\n", a);
	printf("HELLO!: %d\n", b);
	printf("HELLO0: %d\n", c);
	printf("HELLO: %d\n", d);
}
*/
