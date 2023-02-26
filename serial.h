//
// Created by Administrator on 2023/2/25.
//

#ifndef SMSDEVICES_SERIAL_H
#define SMSDEVICES_SERIAL_H
#include <string>
#include <list>

class serial {

public:
    static int serialOpen (const char *device, const int baud);
    static void serialClose (const int fd);
    static void serialPutchar (const int fd, const unsigned char c);
    static void serialPuts (const int fd, const char *s);
    static void serialPrintf (const int fd, const char *message, ...);
    static int serialDataAvail (const int fd);
    static int serialGetchar (const int fd);
    static void serialFlush (const int fd);
    static std::list<std::string> getComList();

    static const char * serialGetStr(const int fd);
};


#endif //SMSDEVICES_SERIAL_H
