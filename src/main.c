#include "../include/filler.h"
#include <stdio.h>

static void initstruct(t_filler *data)
{
	data->my_numplayer = 0;
	data->map_x = 0;
	data->map_y = 0;
	data->piece_x = 0;
	data->piece_y = 0;
}

int	main(void)
{
	t_filler	data;
	int				ret_gnl;
	char			*line;

	initstruct(&data);
	while(1)
	{
		ret_gnl = get_next_line(0, &line);
		ft_get_info(line, &data);
		ft_get_map(&data);
	}


	return(0);
}
