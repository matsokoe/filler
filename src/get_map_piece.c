#include "../include/filler.h"

static void ft_get_piece(t_filler *data, char *line)
{
  int   i;
  int   row_piece;
  char  *pieceline;

  i = 0;
  row_piece = 0;
  if (ft_strstr(line, "Piece"))
    line = line + 1;
  while (ft_get_next_line(0, &line) > 0)
  {
    ft_strjoin(pieceline, line);
    ft_strjoin(pieceline, "\n");
    row_piece++;
    if (row_piece == data->piece_y)
      break;
  }
  data->piece = ft_strsplit(pieceline, '\n');
}

void ft_get_map(t_filler *data)
{
  char *line;
  char *mapline;
  int   row_map;

  row_map = 0;
  mapline = "\0";
  while(ft_get_next_line(0, &line) > 0)
  {
    if(ft_isdigit(line[0]) == 1)
    {
      ft_strjoin(mapline, &line[4]);
      ft_strjoin(mapline, "\n");
      row_map++;
    }
    if (row_map == data->map_y)
      break ;
  }
  data->map = ft_strsplit(mapline, '\n');
  ft_get_piece(data, line);
}
