int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int largest;

	i = 0;
	if (!tab[i])
	{
		return 0;
	}
	i = 0;
	largest = 0;
	while (i < len)
	{
		if (tab[i] > largest)
		{
			largest = tab[i];
		}
		i++;
	}
	return (largest);
}

// DELETE BELOW - DO NOT TURNIN BELOW
//
#include <stdio.h>

int		main()
{
	int tab[5] = {5, 97, 42, 34, 6};
	printf("%d", max(tab, 5));
}
