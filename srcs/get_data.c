#include "../includes/filler.h"

void	get_player(char *line)
{
	t_filler 	*env;

	env = 0;
	if (ft_strstr(line, "$$$"))
	{
		if (ft_strstr(line, "$$$"))
		{
			if (ft_strstr(line, "exec p1 :"))
				env->player = 1;
			if (ft_strstr(line, "exec p2 :"))
				env->player = 2;
		}
	}
}
