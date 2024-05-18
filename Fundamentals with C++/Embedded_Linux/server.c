#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>


#define PORT 8080

int main(int argc, char *argv[])
{
    int server_fd, new_socket, valread;
    struct socketAddressIn address;
    int opt = 1;
    int addLen = sizeof(address);

    char buffer[1024] = {0};
    char *hello = "Hello From Server";

    // Creating Socket File Descriptor
    if() 

    return 0;
}