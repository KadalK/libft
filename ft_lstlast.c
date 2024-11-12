/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:14:35 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/11 18:14:35 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
/*
int	main()
{
	t_list *lst1 = ft_lstnew("kk");
	t_list *lst2 = ft_lstnew("ka");
	t_list *lst3 = ft_lstnew("kak");
	lst1->next = lst2;
	lst2->next = lst3;
	t_list *cont = lst1;
	printf("%s\n", (char *)lst1->content);
	printf("%s\n", (char *)lst2->content);
	printf("%s\n", (char *)lst3->content);
	t_list *cont2 = ft_lstlast(cont);
	printf("%s\n\n",(char *)cont2->content);
	free(lst1);
	free(lst2);
	free(lst3);
}
*/