void ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	if (nb>10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
		ft_putchar('0'+nb);
}

int	main(void)
{
	int a;
	int *******nbr;

	a = 42;
	******nbr = &a;
	ft_putnbr(*******nbr);	
	return(0);
}
