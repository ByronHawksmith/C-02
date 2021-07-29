int	char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (char_is_lower(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[6] = "Hello\0";
	char b[7] = "Hello!\0";
	char c[7] = "Hello0\0";

	ft_strupcase(a);
	ft_strupcase(b);
	ft_strupcase(c);
	printf("Hello: %s\n", a);
	printf("Hello1: %s\n", b);
	printf("Hello0: %s\n", c);
}
*/
