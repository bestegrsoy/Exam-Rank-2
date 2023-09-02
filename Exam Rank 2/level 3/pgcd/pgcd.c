#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int a;
	int b;

	if(ac != 3)
	{
		printf("\n");
		return 0;
	}

	a = atoi(av[1]);
	b = atoi(av[2]);
	if(a <= 0 || b <= 0)
	{
		printf("\n");
		return 0;
	}
	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	printf("%d", a);
	printf("\n");
}