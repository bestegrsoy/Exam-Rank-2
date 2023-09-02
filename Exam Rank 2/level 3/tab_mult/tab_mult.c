#include <unistd.h>

void    ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-2147483648",11);
    }
    else if(nb < 0)
    {
        nb *= -1;
        write(1, "-",1);
        ft_putnbr(nb);
    }
    if(nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return res;
}

int main(int ac, char **av)
{
    int number = 0;
    int counter = 1;
    if(ac == 2)
    {
        number = ft_atoi(av[1]);
        while (counter <= 9)
        {
            ft_putnbr(counter);
            write(1, " x ", 3);
            ft_putnbr(number);
            write(1, " = ",3);
            ft_putnbr(counter * number);
            counter++;
            write(1, "\n",1);
        }
    }
    else
        write(1,"\n",1);
}