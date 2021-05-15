
#include <iostream>
#include <stdlib.h>     
#include <time.h>     
//#include "elem.h"
#include "isUniqueSavs.h"     
#include "SourceSavs.h"     
using std::cout; using std::endl;  using std::cin;



void addElem(elem*& pirmais, elem*& pedejais, int i)
{
    elem* p = new elem;
    p->num = i;
    p->next = NULL;
    if (pirmais == NULL) pirmais = p;
    else pedejais->next = p;
    pedejais = p;
};

void printList(elem* pirmais)
{
    for (elem* p = pirmais; p != NULL; p = p->next)
    {
        cout << p->num << " ";
    };
    cout << endl;
};

void delList(elem*& pirmais)
{
    elem* p = pirmais;
    while (p != NULL)
    {
        pirmais = pirmais->next;
        delete p;
        p = pirmais;
    };
}


void aizpilditSavs(elem*& pirmais) {
    srand(time(NULL));
    elem* pedejais;
   pedejais=pirmais=NULL;
        int i;
        cout << "Ievadiet saraksta elementus (0-beigt ievadu):" << endl;
        cin >> i;
        while (i != 0)
        {
            addElem(pirmais, pedejais, i);
            cin >> i;
	    if (std::cin.fail())   throw - 1; 
        };
    
 
    }

      






