void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr( int nbr)
{
	if (nbr > 10)
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
	else
		ft_putchar('0' + nbr);
}


int	ft_power(int nb, int power)
{
	if (nb < 0 )
		return (0);	
	else if (power == 1)
		return(nb);
	return(nb * ft_power(nb,power-1));
}

int	main(void)
{
	ft_putnbr(ft_power(2,5));
	return(0);
}


