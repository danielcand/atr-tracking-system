#pragma once

//#include "HistClient.h"
#include "ProxyServer.h"
#include <iostream>

int main(int argc, char *argv[])
{
	int port = 902;

	if (argc == 2)
	{
		port = atoi(argv[1]);
	}

	ProxyServer proxy(port);
	proxy.start();

	//HistClient histClient;
	//
	//historical_data_request_t request;
	//request.id = 597387;
	//request.num_samples = 2;

	//historical_data_reply_t reply;

	//try
	//{
	//	reply = histClient.get_historical_data(request);
	//}
	//catch (std::exception &e)
	//{
	//	std::cout << e.what() << std::endl;
	//}

	//system("PAUSE");
	//while (true)
	//{
		// criar o socket.

		// aguardar conex�o.

		// criar thread para processar a requisi��o.

		// ** cada thread vai fazer seu pr�prio parser da requisi��o.
		// ** uma thread pro cliente (criar um dicion�rio que armazenar� a thread e as requisi��es que ela tem que responder). QUANDO AS THREADS DEVER�O SER MORTAS (x minutos sem requisi��o)? 
		// ** armazenar as requisi��es de cada thread em uma fila
	//}
}