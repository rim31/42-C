void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
	ft_putchar('N');
	}
	else
	ft_putchar('P');
}

int main(int i)
{
	i = 42;	
	ft_is_negative(i);
	ft_putchar('\n');
	return(0);
}
