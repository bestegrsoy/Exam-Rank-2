#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int i = 0;
	unsigned res = tab[0];
	while (len == 0)
		return 0;
	while (i < len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return res;
}

int main()
{
    int tab[] = {95,84,934,29293,543};
    printf("%d",max(tab,5));
}