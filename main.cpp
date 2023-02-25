#include <iostream>
#include <list>
#include "serial.h"
using namespace std;

int main() {
    int sid = serial::serialOpen("/dev/ttyS4", 9600);
    serial::serialPuts(sid,"AT+CNUM\n");
    int msg = serial::serialGetchar(sid);
//    ::printf("%p",&msg);
    serial::serialPrintf(sid,(char *)&msg);
    serial::serialClose(sid);
//    list<string> l = getComList();
//
//    list<string>::iterator it = l.begin();
//    while (it != l.end()) {
//        cout << *it << endl;
//        it++;
//    }

    return 0;
}