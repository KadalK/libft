
int	ft_tolower(int c)
{
	if  (c >= 'A' && c <= 'Z')
		return((char)c + 32);
	return (c);
}
