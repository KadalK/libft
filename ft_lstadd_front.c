/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:03:58 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/11 13:34:03 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstprint(t_list *lst)
{
	t_list *tmp = lst;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
}
/*
int main(void)
{
	t_list	*head = NULL;
	t_list *lst1 = ft_lstnew("mite");
//	ft_lstadd_front(&head, lst1);
//	t_list *lst2 = ft_lstnew("grosse");
//	ft_lstadd_front(&head, lst2);
//	t_list *lst3 = ft_lstnew("ma");
//	ft_lstadd_front(&head, lst3);
	ft_lstprint(head);
}*/