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
	int result;
	
	result = 1;
	if (power < 0 )
		return (0);	
	while (power>0)
	{
		result = result * nb;
		power--;
	}
	return(result);
}

int	main(void)
{
	ft_putnbr(ft_power(2,5));
	return(0);
}


