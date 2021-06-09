/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visio_update_attrs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteemo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:15:09 by dteemo            #+#    #+#             */
/*   Updated: 2021/01/21 17:15:11 by dteemo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	update_visio(t_init *data, t_vdata *vdata)
{
	update_cells(vdata, data);
	update_data(vdata, 0, vdata->win1);
	update_attrs(data, vdata->win2);
	usleep(1000000 / VISIO_LIMIT);
}

void	update_players(t_init *data, WINDOW *win2)
{
	int		i;

	i = 0;
	while (i < data->pl_count)
	{
		wmove(win2, 12 + i * 3 + 1, 19);
		wprintw(win2, ft_itoa(data->champs[i]->visio_last_live));
		i++;
	}
}

void	update_attrs(t_init *data, WINDOW *win2)
{
	wmove(win2, 8, 2);
	wprintw(win2, " Cycle : ");
	wprintw(win2, ft_itoa(data->cycle));
	wmove(win2, 10, 2);
	wprintw(win2, " Processes : ");
	wprintw(win2, ft_itoa(data->cursors_count));
	update_players(data, win2);
	wmove(win2, 12 + data->pl_count * 3, 2);
	wprintw(win2, " CYCLE_TO_DIE : ");
	wprintw(win2, ft_itoa(data->cycles_to_die));
	wrefresh(win2);
}
