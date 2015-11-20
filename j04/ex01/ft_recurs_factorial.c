void	ft_putchar(char c)
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


int	ft_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);	
	else if (nb <= 1)
		return(1);
	return(nb * ft_factorial(nb-1));
}

int	main(void)
{
	int nb;

	nb = 5;
	ft_putnbr(ft_factorial(nb));
	return(0);
}

