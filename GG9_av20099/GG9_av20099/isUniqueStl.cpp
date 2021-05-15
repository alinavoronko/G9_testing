#include "isUniqueStl.h"


bool isUniqueStl(std::list <int>& mylist) {
    std::list<int>::iterator it1, it2;
    it1 = mylist.begin();
    for (it1; it1 != mylist.end(); ++it1) {
        for (it2 = it1; ; ) {
            if (it2 != --mylist.end()) { it2++; }
            else break;
            if (*it1 == *it2) return 0;

        }
    } return 1;
}
