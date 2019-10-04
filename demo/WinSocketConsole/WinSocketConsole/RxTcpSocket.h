#pragma once
#ifndef HE_XU_SHI_RX_TCP_SOCKET_H
#define HE_XU_SHI_RX_TCP_SOCKET_H
#include <iostream>
#include <vector>
namespace HeXuShi {
	class RxTcpSocket
	{
	public:
		void Listen(int port);
		void connect(std::string address, int port);
		std::vector<char> Read();
		void Write(char* data);
	};
}
#endif // HE_XU_SHI_RX_TCP_SOCKET_H



