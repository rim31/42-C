void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_numbers(void)
{
	int c;
	
	c = 48;
	while(c<58)
	{
	ft_putchar(c);
	c++;
	}
	ft_putchar('\n');	
}

int main(void)
{
	ft_print_numbers();
	return(0);
}
