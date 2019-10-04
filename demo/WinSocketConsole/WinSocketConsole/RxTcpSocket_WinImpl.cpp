#ifndef HE_XU_SHI_RX_TCP_SOCKET_WIN_IMPL
#define HE_XU_SHI_RX_TCP_SOCKET_WIN_IMPL
#include "RxTcpSocket.h"
#undef UNICODE //Consider canceling this line of code

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>

// Need to link with Ws2_32.lib
//#pragma comment (lib, "Ws2_32.lib")
// #pragma comment (lib, "Mswsock.lib")

// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

using namespace HeXuShi;
void RxTcpSocket::Listen(int port) {

}
void RxTcpSocket::connect(std::string address, int port) {

}
std::vector<char> RxTcpSocket::Read() {
	return std::vector<char>();
}
void RxTcpSocket::Write(char* data) {

}
#endif // !HE_XU_SHI_RX_TCP_SOCKET_WIN_IMPL
