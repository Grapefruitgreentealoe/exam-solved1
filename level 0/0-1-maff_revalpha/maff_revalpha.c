#include <unistd.h>

void 	revalpha(void)
{
	int i;
	char str[26];

	i = 25;
	while (i >= 0)
	{
		if (i % 2 == 0)
			str[i] = i + 'A';
		else
			str[i] = i + 'a';
		write(1, &str[i], 1);
		i--;
	}
}

int		main(void)
{
	revalpha();
}
