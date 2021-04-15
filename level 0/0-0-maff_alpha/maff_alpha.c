#include <unistd.h>

void	alphaeven(void)
{
	int i;
	char str[100];

	i = 0;
	while (i < 26)
	{
		str[i] = 0;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		str[i] = 0;
		if (i % 2 == 0)
			str[i] = i + 'a';
		else
			str[i] = i + 'A';
		write(1, &str[i], 1);
		i++;
	}
}

int		main(void)
{
	alphaeven();
}
