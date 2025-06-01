#include "prng_d_16.h"

uint16_t prng_d_16(struct prng_d_16_s *s) {
  uint16_t block = s->b + s->e;

  s->a++;

  if (s->a < 1) {
    s->c += s->e;
    s->d ^= s->b;
    s->b += s->c;
    s->e ^= s->d;
    return block;
  }

  s->b = ((s->b << 7) | (s->b >> 9)) ^ s->d;
  s->d += 11111;
  s->e = (block << 11) | (block >> 5);
  return block;
}
