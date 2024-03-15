#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if (head == NULL) {
        return 0;
    };
    int ll_help(node* fast_ptr, node* slow_ptr){
        if ((fast_ptr->next == NULL) || (fast_ptr->next->next == NULL)) {  
            return 0;  
        }
        fast_ptr = fast_ptr->next->next; 
        slow_ptr = slow_ptr->next;
        if ((fast_ptr->value == slow_ptr->value) && (fast_ptr->next == slow_ptr->next)) {
            return 1;
        }else {
            return ll_help(fast_ptr, slow_ptr);
        };
    }
    ll_help(head, head);
}
