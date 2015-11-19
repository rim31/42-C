void ft_swap(int *a, int *b)
{
	int *c;

	c = &a;
	a = &b;
	b = &c;	

//correction//
	int temp;

	temp = *a;
	*a = *b;
	*b =temp;
}

int	main(void)
{
	return(0);
}
