void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 47;
	while(x++ < 55)
	{
		y = x;
		while(y++ < 56)
		{
			z = y;
			while(z++ < 57)
			{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(z);
			if (x+y+z<168)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return(0);
}
