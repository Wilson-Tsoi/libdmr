#ifndef DMR_H
#define DMR_H

#endif



#include <stddef.h>

/* hash.c */
size_t hash(void *key); /* hash algorithm generates hash values */
void * lookup(void *key); /* use hash to lookup value*/