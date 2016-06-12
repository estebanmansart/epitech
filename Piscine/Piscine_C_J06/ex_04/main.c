#include <string.h>
#include <stdio.h>


int main(int argc, char **argv)
{
  char *tmp;
  if (argv[1])
    {
      printf("%s\n", strdup(my_revstr(argv[1])));
    }
}
