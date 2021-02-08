#include "../includes/filler.h"

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
		data->row = ft_atoi(&line[8]);
		data->column = ft_atoi(&line[11]);
	}
}

void ft_get_info(char *line, t_filler *data)
{
  ft_player(line, data);
  ft_map(line, data);
}
