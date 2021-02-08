#include "../includes/filler.h"

void initstruct(t_filler *data)
{
	data->my_numplayer = 0;
	data->column = 0;
	data->row = 0;
}

int	main(void)
{
	t_filler	data;
	int				ret_gnl;
	char			*line;

	initstruct(&data);
	while(1)
	{
		ret_gnl = ft_get_next_line(0, &line);
		ft_get_info(line, &data);
		ft_get_map_piece(&data);
	}
}
