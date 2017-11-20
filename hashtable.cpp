#if HAVE_CONFIG_H
#include "private_config.h"
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>


#include "config.h"  // for JSON_INLINE
#include "private.h"

#ifndef INITIAL_HASHTABLE_ORDER
#define INITIAL_HASHTABLE_ORDER 3
#endif

typedef struct hashtable_list list_t;
typedef struct hashtable_pair pair_t;
typedef struct hashtable_bucket bucket_t;

extern volatile uint32_t hashtable_seed;

// Implementation of the hash function
#include "lookup3.h"

