#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		int j = 0;
		int a = 0;
		while (av[1][i])
			i++;
		while (av[2][j])
		{
			if(av[2][j] == av[1][a])
				a++;
			j++;
		}
		if(a == i)
		{
			a = 0;
			while (a < i)
				write(1, &av[1][a++],1);
		}
	}
	write(1, "\n",1);
}