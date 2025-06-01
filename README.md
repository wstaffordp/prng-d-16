# PRNG D 16

It's a fast, statistically-strong PRNG with 16-bit integers and a minimum period of 2⁶⁴.

`prng_d_16()` is the randomization function that generates a 16-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as any Xoroshiro/Xorshift/Xoshiro algorithm that uses 16-bit integers.

It has a minimum period of 2⁶⁴ without broken cycles.

It has an approximated maximum period of 2⁸⁰, although no cycle is guaranteed to reach a full period of 2⁸⁰.

Assigning `0` to `a` and incrementing `d` by `1` behaves as an interdimensional jump function that starts a different cycle with a period of 2⁶⁴.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 16-bit PRNG that generates numbers individually, has a period of at least 2⁶⁴ and passes statistical tests in `stdin16` PractRand with GBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
