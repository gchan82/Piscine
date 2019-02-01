// test for "I am reading !" -- DOES NOT WORK!!!
// on exam, got .sh !" not working

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 1)
		while (*av[ac - 1])
		{
			if (*av[ac - 1] == '!')
			{
				write(1, "\!", 2);
				av[ac -1]++;
			}
			write(1, av[ac - 1]++, 1);
		}
	write(1, "\n", 1);
	return (0);
}
