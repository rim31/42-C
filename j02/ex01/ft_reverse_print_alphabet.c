int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

int main(void)
{
	int i;

	i = 123;
	while (i-- > 97)
		ft_putchar(i);
	ft_putchar('\n');
	return (0);
}
