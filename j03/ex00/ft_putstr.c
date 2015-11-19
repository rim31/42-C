void	ft_putchar(char c)

{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
		ft_putchar(nb%10);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	ft_putstr("quequette");
	ft_putchar('\n');
	return(0);
}
