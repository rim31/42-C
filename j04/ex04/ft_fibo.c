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


int	ft_fibo(int nb)
{
	if (nb < 0 || nb > 25)
		return (0);	
	else if (nb <= 2)
		return(1);
	return(ft_fibo(nb-2) + ft_fibo(nb-1));
}

int	main(void)
{
	int nb;

	nb = 25;
	ft_putnbr(ft_fibo(nb));
	ft_putchar('\n');
	return(0);
}
