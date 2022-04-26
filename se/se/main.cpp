#include <stdio.h>
#include "SerialClass.h"
#include <string>

#include <iostream>
using namespace std;
int main() {
	Serial* SP = new Serial(L"\\\\.\\COM3");
	if (SP->IsConnected())
	{
		cout << "We're connected" << endl;
		cout << "________________" << endl;
	}

	char incomingData[256] = "";
	int readResult = 0;

	while (SP->IsConnected())
	{
		readResult = SP->ReadData(incomingData, 10);
		incomingData[readResult] = 0;

		if (incomingData = "12")
		{
			cout << incomingData << endl;
			
		}
	}
}