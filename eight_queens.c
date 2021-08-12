#include <unistd.h>
int    quens_puzzle_solver(int *ans, int pos, int len);
void  write_digs(int *digs, int len);
int    check_pos(int *arr, int sel, int pos, int len);

int  ft_ten_queens_puzzle(void)
{
  int  arr[10];

  return (quens_puzzle_solver(arr, 0, 10));
}

int  quens_puzzle_solver(int *ans, int pos, int len)
{
  int  sel;
  int  solvs;

  solvs = 0;
  sel = 0;
  while (sel < len)
  {
    if (check_pos(ans, sel, pos, len))
    {
      ans[pos] = sel;
      if (pos == len - 1)
      {
        write_digs(ans, len);
        solvs++;
      }
      else
        solvs += quens_puzzle_solver(ans, pos + 1, len);
    }
    sel++;
  }
  return (solvs);
}

void  write_digs(int *digs, int len)
{
  char  temp;
  int    i;

  i = 0;
  while (i < len)
  {
    temp = (digs[i] % 10) + '0';
    write(1, &temp, 1);
    i++;
  }
  write(1, "\n", 1);
}

int  check_pos(int *arr, int sel, int pos, int len)
{
  int  i;
  int  check;

  i = 1;
  while (i <= pos)
  {
    check = arr[pos - i];
    if (check == sel || (check == sel + i && sel + i < len)
      || (check == sel - i && sel - i >= 0))
      return (0);
    i++;
  }
  return (1);
}