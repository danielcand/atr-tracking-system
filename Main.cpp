#pragma once

#include "HistClient.h"

int main(int argc, char *argv[])
{
	HistClient histClient;
	
	historical_data_request_t request;
	request.id = 1;
	request.num_samples = 10;

	historical_data_reply_t reply;

	reply = histClient.get_historical_data(request);


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