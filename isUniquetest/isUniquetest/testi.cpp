
#include <iostream>
#include"../../GG9_av20099/GG9_av20099/isUniqueStl.h"
#include"../../GG9_av20099/GG9_av20099/isUniqueSavs.h"
#include"../../GG9_av20099/GG9_av20099/SourceSavs.h"
#include"../../GG9_av20099/GG9_av20099/SourceStl.h"


#include"../../GG9_av20099/GG9_av20099/elem.h"

/* 
direktoriju sturktūra:

├── repos
│   ├── GG9_av20099
│   │   └── GG9_av20099
│   │       ├── isUniqueStl.h
│   │       ├── isUniqueStl.cpp
│   │       └── SourceStl.cpp
|   └──isUniquetest
│       └── isUniquetest
│           └── testi.cpp

*/
using namespace std;

//------------------STL::List testi--------------------

//pirmais tests ir ar patvaļīgu ievadu
//tajā tiek izmantota try-catch konstrukcija
bool test_stl_A() {
    int sagaidam;
    int res;
    cout << "Vai jusu saraksta elementi bus unikali? 1-ja, 0-ne" << endl;
    cin >> sagaidam;
std::list<int> aa;
	try{
    aizpildit(aa);
res = isUniqueStl(aa);
}
    catch (int e) {
        cout << "Saraksta elementi var būt tikai veseli skaitļi!" << endl;
        res = -1;
    }
    catch (...) {
        cout << "Cita kļūda!" << endl;
        res = -1;
    }
        return res==sagaidam;
}

//B un C testi ir cieti iekodēti
bool test_stl_B() {
    bool sagaidam = 1;
	std::list<int> aa = { 2,3,4,5,6 };
	return isUniqueStl(aa)==sagaidam;
}
bool test_stl_C() {
    bool sagaidam = 0;
    std::list<int> aa = { 2,3,5,5,6 };
    return isUniqueStl(aa) == sagaidam;
}


//------------------Savas viensaisu saraksta implementacijas testi--------------------
bool test_savs_A() {
    int sagaidam;
    bool res;
    cout << "Vai jusu saraksta elementi bus unikali? 1-ja, 0-ne" << endl;
    cin >> sagaidam;
    elem* nor=NULL;
    try {
        aizpilditSavs(nor);
        res = isUniqueSavs(nor);
    }
    catch (int e) {
        cout << "Saraksta elementi var būt tikai veseli skaitļi!" << endl;
        res = -1;
    }
    catch (...) {
        cout << "Cita kļūda!" << endl;
        res = -1;
    }
    return res == sagaidam;
}

bool test_savs_B() {
    int sagaidam=1;
    int res;
    elem* pirm;
    elem* ped;
    pirm = ped = NULL;
    addElem(pirm, ped, 1);
    addElem(pirm, ped, 2);
    addElem(pirm, ped, 3);
    addElem(pirm, ped, 4);
    res = isUniqueSavs(pirm);
    return res == sagaidam;
}


bool test_savs_C() {
    int sagaidam = 0;
    int res;
    elem* pirm;
    elem* ped;
    pirm = ped = NULL;
    addElem(pirm, ped, 1);
    addElem(pirm, ped, 2);
    addElem(pirm, ped, 2);
    addElem(pirm, ped, 4);
    res = isUniqueSavs(pirm);
    return res == sagaidam;
}



int main() {
    cout << "------STL::List testesana------" << endl;
	cout << "Jusu testa rezultats: "<<(test_stl_A()? "OK": "Tests nebija veiksmigs")<< endl;
	cout << "B testa rezultats: "<<(test_stl_B()? "OK": "Tests nebija veiksmigs")<< endl;
	cout << "C testa rezultats: "<<(test_stl_C()? "OK": "Tests nebija veiksmigs")<< endl;
    cout << "------Savas viensaisu saraksta implementacijas testesana------" << endl;
    cout << "Jusu testa rezultats: " << (test_savs_A() ? "OK" : "Tests nebija veiksmigs") << endl;
    cout << "B testa rezultats: " << (test_savs_B() ? "OK" : "Tests nebija veiksmigs") << endl;
    cout << "C testa rezultats: " << (test_savs_C() ? "OK" : "Tests nebija veiksmigs") << endl;
}