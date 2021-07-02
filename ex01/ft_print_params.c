#include <unistd.h>

void ft_writestr2(char *string)
{
  int i;

  i = -1;
  while (i++, string[i] != '\0')
  {
    write(1, &string[i], 1);
  }
  write(1, &"\n", 1);
}

int main(int argc, char *argv[]) {
  int i;

  i = 0;
  while (i++, argv[i] != '\0')
  {
    ft_writestr2(argv[i]);
  }

	return 0;
}