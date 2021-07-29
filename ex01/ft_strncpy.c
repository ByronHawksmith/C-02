/* 
 * If we were to get the length of the dest string
 * we could prevent stack smashing by checking and 
 * returning out early.
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		if (!dest)
			*dest = '\0';
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest - n);
}

/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "0123456789abcdefghij";
	char	b[10];

	printf("Before a: %s\n", a);
	printf("Before b: %s\n", b);
	ft_strncpy(b, a, 5);
	printf("After a: %s\n", a);
	printf("After b: %s\n", b);
}
*/
