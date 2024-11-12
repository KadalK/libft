/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:46:00 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/12 13:46:00 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ben;

	if (!lst || !del)
		return ;
	ben = *lst;
	while (*lst)
	{
		ben = ben->next;
		ft_lstdelone(*lst, del);
		*lst = ben;
	}
}
