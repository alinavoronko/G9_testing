/*av20099
* 04.03.2021
* STL::list
G9. Uzrakstît funkciju, kas pârbauda, vai sarakstâ ir  vismaz divi elementi ar vienâdâm vçrtîbâm.
*/

#include<iostream>
#include<fstream>
#include<list>
#include <stdlib.h>     
#include <time.h>      
#include "SourceStl.h"   
//#include "isUniqueStl.h"
using namespace std;


//Saraksts tika realizēts ar STL::list palīdzību
//Tam ir divas funkcijas: print un isUnique, kas ir iznesta ārpus šī faila
//Projektā isUnique_test tika notestēta funkcijas isUnique darbība

void print(const list<int>& a) {
    for (auto& i : a) {
        cout << i << " ";
    }
    cout << endl;
}


void aizpildit(list<int>&mylist){
    srand(time(NULL));
    int size;
    cout << "Ievadiet elementu skaitu: ";
    cin >> size;
    while (size < 1) {
        cout << "Elementu skaitam jabut >0. Meginiet velreiz." << endl;
        cin >> size;

    }
    cout << "Ievadiet " << size << " elementus: ";
            int el;
            for (int i = 0; i < size; i++) {


                cin >> el;
                if (std::cin.fail())
                    throw - 1; 

                mylist.push_back(el);
            }
       

       

}