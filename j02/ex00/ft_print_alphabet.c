int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

int main(void)
{
	int i;

	i = 96;
	while (i++ < 122)
		ft_putchar(i);
	ft_putchar('\n');
	return (0);
}
