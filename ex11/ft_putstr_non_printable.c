#include <unistd.h>

int	char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	dec_2_hex(unsigned char c)
{
	char	*hex_symbs;

	hex_symbs = "0123456789abcdef";
	if (c > 16)
	{
		dec_2_hex(c / 10);
		dec_2_hex(c % 10);
	}
	else
		write(1, &hex_symbs[c], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!char_is_printable(str[i]))
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			dec_2_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(a);
}
*/