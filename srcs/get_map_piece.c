#include "../includes/filler.h"

static void ft_get_map(t_filler *data)
{
  char *line;
  int   i;

  i = 0;
  while(ft_get_next_line(0, &line) > 0)
  {
    if(ft_isdigit(line[11]) == 1)
    {

    }
  }
}

void ft_get_map_piece(t_filler *data)
{
  ft_get_map(data);
}
