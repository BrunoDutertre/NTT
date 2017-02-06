#include "ntt_asm.h"
#include <stdio.h>

int main(void) {
  if (avx2_supported()) {
    printf("OK: AVX2 is supported\n");
  } else {
    printf("AVX2 is not supported\n");
  }
  return 0;
}
