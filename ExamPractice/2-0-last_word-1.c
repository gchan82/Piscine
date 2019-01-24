#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;
		while (ft_isblank(*av[1])) // moves left to the Y (last char of string)
			av[1]--;
		while (*av[1] && !ft_isblank(*av[1])) // moves left to the space
			av[1]--;
		av[1]++;
		while (*av[1] && !ft_isblank(*av[1])) // moves right to first char of string
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}

/* Put this code into Python Tutor:
 *
 *#include <unistd.h>
#include <stdlib.h>

int        ft_isblank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

int        main(void)
{
  int ac = 2;
  char **av;
  av = malloc(sizeof(char*) * 2);
  
  char *p = "hello ";
  av[1] = p;
  
    if (ac == 2)
    {
        while (*av[1])
            av[1]++;
        av[1]--;
        while (ft_isblank(*av[1]))
            av[1]--;
        while (*av[1] && !ft_isblank(*av[1]))
            av[1]--;
        av[1]++;
        while (*av[1] && !ft_isblank(*av[1]))
            write(1, av[1]++, 1);
    }
    write(1, "\n", 1);
    return (0);
}
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
