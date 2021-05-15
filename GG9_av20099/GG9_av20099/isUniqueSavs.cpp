#include "isUniqueSavs.h"
#include "elem.h"
#include <stdio.h>
bool isUniqueSavs(elem* pirmais) {
    elem* it1 = pirmais;

    for (it1; it1->next != NULL; it1 = it1->next)
    {
        for (elem* it2 = it1->next; it2 != NULL; it2 = it2->next)
            if (it1->num == it2->num) {
                return false;
            }
    };
    return true;

}