#include <unistd.h>

void	multiple_char_len(char str)
{
	int i;

	i = 0;
	if (str >= 'a' && str <= 'z')
	{
		while (i < str - 'a' + 1)
		{
			write(1, &str, 1);
			i++;
		}
	}
	if (str >= 'A' && str <= 'Z')
	{
		while (i < str - 'A' + 1)
		{
			write(1, &str, 1);
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	int len;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				multiple_char_len(argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				multiple_char_len(argv[1][i]);				
			else 
				write(1, &argv[1][i], 1);
			++i;
		}
	}
	write(1, "\n", 1);
	return (0);
}
