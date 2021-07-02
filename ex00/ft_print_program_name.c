#include <unistd.h>

void ft_writestr(char *string)
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
  ft_writestr(argv[0]);
	return 0;
}