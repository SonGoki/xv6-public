#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  int x =atoi(argv[1]);
  printf(2,"%x --> %x \n", &x, memory(&x));
  exit();
}
