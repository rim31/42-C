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
		ft_putchar('0'+ nb);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
	//	ft_putchar(str[len]);
		len++;
	}
	ft_putnbr(len);
	return (len);
}

int main(void)
{
	ft_strlen("quequette");
	ft_putchar('\n');
	return(0);
}
