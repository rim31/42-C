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

int	ft_factorial(int i)
{
	int nb;
	int fact;

	nb = 0;
	fact = 1;
	if (i< 0 || i > 14)
		return (0);	
	else if (i <= 1)
		return(1);
	while (nb<i)
	{
		fact = (i-nb)*fact;
		nb++;
	}
	return(fact);
}

int	main(void)
{
	int nb;

	nb = 10;
	ft_putnbr(ft_factorial(nb));
	return(0);
}

