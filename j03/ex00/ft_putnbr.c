void	ft_putnbr(int nb)
{
	ft_putnbr(nb/10);
	ft_putnbr(nb%10);
	if (nb/10>10)
		ft_putnbr(nb/10);
	else
		write(1,'0'+nb%10,1);
}

int main(void)
{
	int nb;

	nb = 42;
	ft_putnbr(nb);
	return(0);
}
