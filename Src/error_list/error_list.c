#include "error_list.h"

/*-----------------------------------------------------------
/Reset elist
/param: pointer to error list
/return:
-----------------------------------------------------------*/
void elist_reset(elist_t *el)
{
    el->err_cnt = 0;
    el->err_hand = 0;
}

/*-----------------------------------------------------------
/Add error to the list
/param: pointer to error list
/return:
-----------------------------------------------------------*/
void elist_push(elist_t *el)
{
    el->err_cnt++;
}

/*-----------------------------------------------------------
/Remove error from the list
/param: pointer to error list
/return:
-----------------------------------------------------------*/
void elist_pop (elist_t *el)
{
    if (el->err_cnt != 0) el->err_cnt--;
    if (el->err_hand != 0) el->err_hand--;
}

/*-----------------------------------------------------------
/Handle one error from list
/param: pointer to error list
/return:
-----------------------------------------------------------*/
void elist_handle(elist_t *el)
{
    if (el->err_hand < el->err_cnt) el->err_hand++;
}

/*-----------------------------------------------------------
/Get status of error list
/param: pointer to error list
/return:
-----------------------------------------------------------*/
elist_state_t elist_check(elist_t *el)
{
    if (el->err_cnt == 0) return ELIST_EMPTY;
    if (el->err_cnt == el->err_hand )return ELIST_ALL_HANDLED;
    return ELSIT_UNHANDLED;
}
