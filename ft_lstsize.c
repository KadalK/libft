/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapinarc <kapinarc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:59:10 by kapinarc          #+#    #+#             */
/*   Updated: 2024/11/11 15:59:10 by kapinarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
//
//int main(void)
//{
//	t_list *lst1 = ft_lstnew("Hello");
//	t_list *lst2 = ft_lstnew("Hello");
//	lst1->next = lst2;
//	t_list	*lstcontent = lst1;
//	t_list	*lstcontent2 = lst2;
//	printf("%d\n", ft_lstsize(lstcontent));
//	printf("%d\n", ft_lstsize(lstcontent2));
//}