#include <stdint.h>

#ifndef LIB_DECLARATIONS
    #define LIB_DECLARATIONS

    #define ARRSIZE_16  65536

#endif

uint8_t *build_active_bits_table();
uint64_t bincoeff(uint16_t n, uint16_t k);