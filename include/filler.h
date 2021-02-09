#ifndef FILLER_H
# define FILLER_H

# include <stdio.h>
# include "../libft/libft.h"

typedef struct	s_filler
{
				int			my_numplayer;
				char		*letter;
				int			map_y;
				int			map_x;
				char		**map;
				int			piece_y;
				int			piece_x;
				char		**piece;
}								t_filler;

void ft_get_info(char *line, t_filler *data);
void ft_get_map(t_filler *data);

# endif
