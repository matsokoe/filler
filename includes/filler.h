#ifndef FILLER_H
# define FILLER_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct	s_filler
{
				int			my_numplayer;
				char		*letter;
				int			row;
				int			column;
}								t_filler;

void ft_get_info(char *line, t_filler *data);
void ft_get_map_piece(t_filler *data);

# endif
