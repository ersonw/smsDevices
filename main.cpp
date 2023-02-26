#include <iostream>
#include <list>
#include <cstdio>
#include <cstring>
#include <unistd.h>
#include "serial.h"
extern "C" {
#include "serial_c.h"//;
}
using namespace std;

int main() {
//    int sid = serial::serialOpen("/dev/ttyUSB0", 9600);
//    serial::serialPuts(sid,"AT+CNUM\n");
//    int c;
//    char msg[1024];
//    while ((c = serial::serialGetchar(sid) != -1)){
//        cout << c << endl;
//        strcat(msg,&c);
//    }
//    serial::serialClose(sid);
//    list<string> l = serial::getComList();

//    list<string>::iterator it = l.begin();
//    while (it != l.end()) {
//        cout << *it << endl;
//        it++;
//    }

    return 0;
}