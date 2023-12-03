#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAG_ADDRESS "XX:XX:XX:XX:XX:XX"  // Replace with your BLE Tag's addres

int is_moving(short *acceleration) {
    int i, threshold = 10;
    int sum = 0;
    for (i = 0; i < 3; i++) {
        sum += abs(acceleration[i]);
    }

int main() {
    struct sockaddr_rc addr = {0};
    int s, status;
    char dest[18];
	addr.rc_family = AF_BLUETOOTH;
    str2ba(TAG_ADDRESS, &addr.rc_bdaddr);

  if (status == 0) {
        char buffer[1024];
        short acceleration[3];

        while (1)
		{
            status = read(s, buffer, sizeof(buffer));
            if (status < 0) {
                perror("Read failed");
                break;
            
            if (is_moving(acceleration)) {
                printf("Tag is moving\n");
            } else {
                printf("Tag is stationary\n");
            }

}