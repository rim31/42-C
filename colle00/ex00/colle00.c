void	ft_putchar(char c);

void	colle00(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		ft_putchar('?');
	while(j++ < y)
	{
		while(i++ < x)
		{
			if(j == 1 || j == y)
			{
				if (i ==1 || i == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if (i == 1 || i == x)
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
		}
		i = 0;
		ft_putchar('\n');
	}
}
