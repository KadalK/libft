#include "libft.h"

void	*ft_memset(void *adr, int value, size_t n)
{
	char *str;
	str = (char *)adr;
	while (n)
	{
		*str = (unsigned char)value;
		str ++;
		n--;
	}
	return (adr);
}
/*
// Déclaration de ta fonction ft_memset

int	main(void)
{
    // Initialisation d'un tableau de 10 caractères
	char buffer[10] = "Bonjour!";

    // Affichage avant l'appel de ft_memset
	printf("Avant memset : %s\n", buffer);

    // Appel de ft_memset pour remplacer les 5 premiers caractères par '-'
	ft_memset(buffer, '5', 4);

    // Affichage après l'appel de ft_memset
	printf("Après memset : %s\n", buffer);

	return (0);
} */
