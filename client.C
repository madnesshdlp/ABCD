/*
 * client.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */

#include <string>
#include <iostream>
#include <unistd.h> //contains various constants

#include "SIMPLESOCKET.H"

using namespace std;

int main() {
	srand(time(NULL));
	TCPclient c;
	string host = "localhost";
	string x,y, msg;

	//connect to host
	c.conn(host , 2022);

	int i=0;
	/*bool goOn=1;
	while(goOn){ // send and receive data
		if((rand() % 20) < i++){
			msg = string("BYEBYE");
			goOn = 0;
		}else{
			msg = string("client wants this");
		}
		cout << "client sends:" << msg << endl;
		c.sendData(msg);
		msg = c.receive(32);
		cout << "got response:" << msg << endl;*/
	cout<<"Koordinaten?"<<endl;
	cout<<"X: ";
	cin>>x;
	c.sendData(x);
	cout<<"Y: ";
    cin>>y;
    c.sendData(y);
    msg = c.receive(32);

		sleep(1);

	}



