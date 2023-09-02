#include <unistd.h>

void	ft_print(int n)
{
	if(n > 9)
		ft_print(n / 10);
	write(1, &"0123456789"[n % 10],1);
}

int main(int ac, char **av)
{
	(void)av;

	ft_print(ac - 1);
	write(1, "\n",1);
}