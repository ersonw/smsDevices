#include <iostream>
#include <list>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <cstdlib>
#include <sstream>
#include "serial.h"
//
//extern "C" {
//#include "serial_c.h"//;
//}
using namespace std;

int main() {
    list<string> l = serial::getComList();

    list<string>::iterator it = l.begin();
    while (it != l.end()) {
//        cout << *it << endl;
        int sid = serial::serialOpen(it->c_str(), 9600);
        serial::serialPrintf(sid, "AT+CNUM\r");
        sleep(1);
        const char *revice = serial::serialGetStr(sid);
        cout << revice << endl;
        serial::serialClose(sid);
        it++;
    }

    return 0;
}