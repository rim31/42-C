void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	*ft_strrev(char *str)
{
	int i;

	i = 0;
	while(str[i]!='\0')
		i++;
	while(i>=0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int	main(void)
{
	ft_strrev("quequette");
	ft_putchar('\n');
	return(0);
}
