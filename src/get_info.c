#include "../include/filler.h"

static void ft_player(char *line, t_filler *data)
{
	if (ft_strstr(line, "p1"))
	{
		if (ft_strstr(line, "matsokoe"))
			data->my_numplayer = 1;
			data->letter = "Oo";
	}
	else if (ft_strstr(line, "p2"))
	{
		if (ft_strstr(line, "matsokoe"))
			data->my_numplayer = 2;
			data->letter = "Xx";
	}
}

static void ft_map(char *line, t_filler *data)
{
	if (ft_strstr(line, "Plateau"))
	{
		data->map_y = ft_atoi(&line[8]);
		data->map_x = ft_atoi(&line[11]);
	}
}

static void ft_piece(char *line, t_filler	*data)
{
	if (ft_strstr(line, "Piece"))
	{
		data->piece_y = ft_atoi(&line[7]);
		data->piece_x = ft_atoi(&line[9]);
	}
}

void ft_get_info(char *line, t_filler *data)
{
  ft_player(line, data);
  ft_map(line, data);
	ft_piece(line, data);
}
