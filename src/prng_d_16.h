#ifndef PRNG_D_16_H
#define PRNG_D_16_H

#include <stdint.h>

struct prng_d_16_s {
  uint16_t a;
  uint16_t b;
  uint16_t c;
  uint16_t d;
  uint16_t e;
};

uint16_t prng_d_16(struct prng_d_16_s *s);

#endif
