#include <iostream>
#include <winsock.h>

// #pragma comment(lib, "Win32/winsock.lib")
#define PORT 9909

struct sockaddr_in srv;
fd_set fr, fw, fe;

int main()
{
    int newRequest = 0;
    // Initialize the WSA variables
    WSADATA ws;
    if (WSAStartup(MAKEWORD(2, 2), &ws) < 0)
    {
        std::cout << "WSA is not intialized\n";
    }
    else
    {
        std::cout << "WSA initializes successfully\n";
    }

    // Initialize the Socket
    int newSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (newSocket < 0)
    {
        std::cout << "Socket not opened!\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        std::cout << "Socket Opened Successfully" << newSocket << "\n";
    }

    // Initiaize the environment for sockaddr structure
    srv.sin_family = AF_INET;
    srv.sin_port = htons(PORT);
    srv.sin_addr.s_addr = INADDR_ANY;
    memset(&(srv.sin_zero), 0, 8);

    // Bind the socket to the local port
    newRequest = bind(newSocket, (sockaddr*) &srv, sizeof(sockaddr));
    if(newRequest < 0)
    {
        std::cout << "Failed to bind to the local port\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        std::cout << "Successfully bind to the local port\n";
    }

    // listen the request from client (queues the request)
    newRequest = listen(newSocket, 5);
    if(newRequest < 0)
    {
        std::cout << "Failed to start listening to the local port\n";
        exit(EXIT_FAILURE);
    }
    else
    {
        std::cout << "Successfully started listening to the local port\n";
    }

    // keep waiting for new requests and proceed as per the request
    
    return 0;
}