//
// Created by Administrator on 2023/2/26.
//

#ifndef SMSDEVICES_SERIAL_C_H
#define SMSDEVICES_SERIAL_C_H
#define SPEED 9600
#define SIZE 512
#define COM_NUMBER 4

typedef struct{
    int csq;   // Signal Quality
    int ber;   // Bit Error Rate
    char provider_name[30]; // Provider Name
    char sim_mode[30];
    char phone[88];
}StateInfo;
int open_port(int port);
int set_opt(int fd, int nSpeed, int nBits, char nEvent, int nStop);
static int serial_send(int file_descriptor, char *buffer, size_t data_len);
void close_port(int fd);
int get_operator(int fd,StateInfo *stateinfo);
int get_csq(int fd,StateInfo *stateinfo);
int get_mod(int fd,StateInfo *stateinfo);
int get_phone(int fd,StateInfo *stateinfo);
int mode_selection(int fd,int mode);
int offline_control(int fd,int isornot);

static int csq_detected(int csq);
static int mod_detected(int mod,StateInfo *stateinfo);

#endif //SMSDEVICES_SERIAL_C_H
