#include <iostream>
#include <thread>
using namespace std;

//Anzahl vorhandener Prozessorkerne ermitteln

int main()
{
	const int Anzahl_CPU_Kerne = std::thread::hardware_concurrency();


	cout << "Die Anzhal der CPU Kerne lautet: " << Anzahl_CPU_Kerne << endl; 

	system("PAUSE");
	return 0;
}


