int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (char_is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "HELlO";
	char b[] = "HELlO!";
	char c[] = "HELlO0";

	ft_strlowcase(a);
	ft_strlowcase(b);
	ft_strlowcase(c);
	printf("HELlO: %s\n", a);
	printf("HELlO1: %s\n", b);
	printf("HELlO0: %s\n", c);
}
*/
