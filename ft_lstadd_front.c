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

int main(void)
{
	t_list	*lst1 = ft_lstnew("ma ");
	t_list	*lst2 = ft_lstnew("grosse ");
	t_list	*lst3 = ft_lstnew("mite");
	lst1->next = lst2;
	lst2->next = lst3;
	printf("---[Avant]---\n\n");
	printf("%s\n", (char *)(lst1->content));
	printf("%s\n", (char *)(lst2->content));
	printf("%s\n", (char *)(lst3->content));
	ft_lstadd_front(&lst3, lst1);
	printf("\n---[Apres]---\n\n");
	printf("%s\n", (char *)(lst1->content));
	printf("%s\n", (char *)(lst2->content));
	printf("%s\n", (char *)(lst3->content));
}