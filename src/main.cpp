#include "includes.h"
#include "cuda.cuh"


int main(int argc, char *argv[]) {
  printf("Hello World from CPU\n");
  Wrapper::wrapper();
  return 0;
}
