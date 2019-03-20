#ifndef ERROR_LIST_H
#define ERROR_LIST_H

#include <stdint.h>

typedef struct
{
    uint32_t err_cnt; // Count of errors
    uint32_t err_hand;// Count of handling errors
}elist_t;

typedef enum
{
    ELIST_EMPTY = 0,
    ELIST_ALL_HANDLED,
    ELSIT_UNHANDLED // critical error
}
elist_state_t;

void elist_reset(elist_t *el);
void elist_push(elist_t *el);
void elist_pop (elist_t *el);
void elist_handle(elist_t *el);
elist_state_t elist_check(elist_t *el);

#endif //ERROR_LIST_H
