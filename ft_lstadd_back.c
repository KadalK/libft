/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:42:37 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/12 11:42:37 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}
/*
int	main(void)
{

	t_list *list = NULL;
	t_list *lst1 = ft_lstnew("Hello");
	t_list *lst2 = ft_lstnew("hello");
	t_list *lst3 = ft_lstnew("how low");
	// Ajouter le premier élément
	ft_lstadd_back(&list, lst1);
	// Ajouter un deuxièmelst
	ft_lstadd_back(&list, lst2);
	// Ajouter un troisièmlstt
	ft_lstadd_back(&list, lst3);
	// Afficher le contenu de la liste
	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	current = list;
	while (current)
	{
		t_list *temp = current;
		current = current->next;
		free(temp);
	}
		return 0;
}
*/