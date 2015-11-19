void	ft_putchar(char c)
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

int	ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while(str[i] != '\0')
	{
		if (str[i]>47 && str[i]<58)
		{
			nbr=nbr*10+str[i]-48;
		}
		else
			return(nbr);
		i++;
	}
	
	ft_putnbr(nbr);
	return(nbr);
}

int	main(void)
{
	ft_atoi("42");
	ft_putchar('\n');
	return(0);
}
