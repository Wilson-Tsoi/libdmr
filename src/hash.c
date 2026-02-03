/* Implement hash function and hashtable here */

#include "./dmr.h"

/*  key-value pair system   "sp, np"
 *  sp was a originally use as a pointer to a symbol buffer, 
 *  np points to list of the "hash values"
*/

static const int hshnum = 0x77577;    /* hash number for scrambing */
const int hshsiz = 100;
const int pssize = 9;
const int hshlen = pssize * hshsiz;
int * hshtab;

static int *sp, *np;    /*  pair of pointers
                        *      sp[]:   key-list
                        *      np[]:   value-list 
                        */                              



/*  hash() algorithm:   returns non-zero index  */
/*   
*   generate index for given key, the indices can be store on a list 
*   "use for retrieving hash values" 
*/                        
size_t hash(void *key) {
    size_t index = *((size_t *) key);    /* non zero values for indexing */
    /* for loop: iterately scramble with the hash number 0x77577 */
    index *= hshnum;

    return index;
}

void * lookup(void *key) {
    void * rp = {}; /* The result pointer */
    
    return rp;
}