/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_file_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 13:50:03 by fthwala           #+#    #+#             */
/*   Updated: 2017/09/09 11:55:43 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	do_ls(char *dir, t_env *e)
{
	t_dir			*list;
	t_dir			*tp;

	list = NULL;
	if ((e->dirp = opendir(dir)) != NULL)
	{
		while ((e->dp = readdir(e->dirp)) != NULL)
		{
			if (e->dp->d_name[0] != '.' || e->a == 1)
			{
				tp = (t_dir *)malloc(sizeof(t_dir));
				tp->dir = e->dp->d_name;
				tp->full_path = ft_strjoin(ft_strjoin(dir, "/"), e->dp->d_name);
				lstat(tp->full_path, &e->sb);
				tp->time = e->sb.st_mtime;
				(S_ISDIR(e->sb.st_mode) == 1) ? tp->is_dir = 1 : 0;
				tp->next = list;
				list = tp;
			}
		}
		sort_list(&list, compare_strings, 0);
		ft_print_ls(list, e, dir);
		return ;
	}
	ft_file_check(e);
}

void	ft_ls(t_env *e)
{
	t_dir	*tp;

	tp = e->list;
	while (tp != NULL)
	{
		do_ls(tp->dir, e);
		tp = tp->next;
	}
}
