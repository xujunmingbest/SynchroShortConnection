#include "SynchroShortConnection.h"

void main() {


	SynchroShortConnection ssc;
	cout << ssc.Connect("47.94.219.135", "10001") << endl;
	ssc.SetTimeOut(5000);
	ssc.Recv();
	system("pause");
}