#include <unistd.h>

void ft_print(int nb)
{
    if(nb > 9)
        ft_print(nb / 10);
    write(1, &"0123456789"[nb % 10],1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return (sign * res);
}

int is_prime(int nb)
{
    int i = 2;
    if(nb <= 1)
        return 0;
    while (i < nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int number = ft_atoi(av[1]);
        int sum = 0;
        while(number > 0)
        {
            if(is_prime(number))
                sum += number;
                number--;
        }
        ft_print(sum);
    }
    else
        write(1, "0",1);
    write(1, "\n",1);
}