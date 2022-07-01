#include <iostream>
#include <thread>
using namespace std;

//Ausgabe der Thread-ID der main Funktion

void threadAusgabe()
{

std::thread::id threadID = std::this_thread::get_id();

}

int main()
{
	std::thread th(threadAusgabe);
	std::thread::id threadID = th.get_id();
	cout << "Thread ID der Main-Funktion lautet : " << threadID << std::endl;  //Beim Neustart der Konsolenanwendung ändert sich die Thread ID

	system("pause");
	return 0;
}