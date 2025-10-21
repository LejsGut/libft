/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalkic <lsalkic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:30:01 by lsalkic           #+#    #+#             */
/*   Updated: 2025/10/21 16:05:52 by lsalkic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void	*content;

}			t_list;

t_list	*ft_lstnew(void *content)
{
	content = malloc(sizeof(t_list));
	if (!content)
		return (NULL);
	return (content);
}