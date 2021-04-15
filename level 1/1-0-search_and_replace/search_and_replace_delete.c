#include <unistd.h>
//2번째 문자열에 해당하는 것을 3번째 문자열로 바꾸는 것.(무조건 개행)
//문자열 3개 아니면 개행
//두번째 인자가 첫번째에 포함되지 않으면 개행.

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == 0)
		return(0);
	i = 0;
	while(str[i])
	{	
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == 0)
			return(&str[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char *charptr;
	
	if (argc == 4)
	{
		while (*argv[1])
		{
			charptr = ft_strstr(argv[1], argv[2]);
			while (*argv[3])
			{
				*charptr = *argv[3];
				charptr++;
				argv[3]++;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);

}