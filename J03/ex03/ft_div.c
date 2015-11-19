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

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
	ft_putnbr(*div);
	ft_putnbr(*mod);
}

int	main(void)
{
	ft_div_mod(5,2,0,0);
	return(0);
}
