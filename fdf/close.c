/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshahein <mshahein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:46:16 by mshahein          #+#    #+#             */
/*   Updated: 2026/09/15 10:06:11 by mshahein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	close_window(void *param)
{
	t_window	*window;

	window = (t_window *)param;
	free_int_matrix(window->mat.mat);
	mlx_destroy_image(window->mlx, window->img.img);
	mlx_destroy_window(window->mlx, window->win);
	mlx_destroy_display(window->mlx);
	free(window->mlx);
	exit(0);
	return (0);
}

int	key_press(int keycode, t_window *qwe)
{
	if (keycode == 65307)
		close_window(qwe);
	else if (keycode == 65361)
		qwe->angle_x -= 0.1;
	else if (keycode == 65363)
		qwe->angle_x += 0.1;
	else if (keycode == 65362)
		qwe->angle_y -= 0.1;
	else if (keycode == 65364)
		qwe->angle_y += 0.1;
	else if (keycode == 61)
		qwe->zoom += 1;
	else if (keycode == 45 && qwe->zoom > 1)
		qwe->zoom -= 1;
	else if (keycode == 119)
		qwe->offset_y -= 10;
	else if (keycode == 115)
		qwe->offset_y += 10;
	else if (keycode == 97)
		qwe->offset_x -= 10;
	else if (keycode == 100)
		qwe->offset_x += 10;
	handle_input(qwe);
	return (0);
}

int	handle_input(t_window *qwe)
{
	ft_bzero(qwe->img.addr, qwe->img.line_length * WIN_Y);

	create_imagine(&qwe->mat, qwe->img, qwe);

	mlx_put_image_to_window(
		qwe->mlx,
		qwe->win,
		qwe->img.img,
		0,
		0
	);

	return (0);
}
