void ft_bzero(void *str, int n)
{
	int i;
	i = 0;
	char *sr;
        sr = (char*)str; 
	while(i < n)
	{
		sr[i] = 0;
		i++;
	}
}
