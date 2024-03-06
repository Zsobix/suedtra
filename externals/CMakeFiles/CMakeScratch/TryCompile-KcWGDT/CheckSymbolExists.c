/* */
#include <setjmp.h>

int main(int argc, char** argv)
{
  (void)argv;
#ifndef setjmp
  return ((int*)(&setjmp))[argc];
#else
  (void)argc;
  return 0;
#endif
}
