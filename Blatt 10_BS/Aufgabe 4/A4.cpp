#include <iostream>
#include <thread>
using namespace std;

// Arbeiten mit Threads

void thread_id_funktion()
{
	std::thread::id threadID = std::this_thread::get_id();
	cout << "Thread 2, mit folgender Thread ID: " << threadID << endl; 

}


void zaehle_bis_30()
{
	for (int i = 1; i < 31; i++)
	{
		cout << "Thread 1, mit folgender Zahlenausgabe: " << i << endl;
		std::this_thread::sleep_for(1s);
	}

	
}

int main()
{
	

	thread t1(zaehle_bis_30);
	thread t2(thread_id_funktion);

	t1.join();
	t2.join();
	
	
	system("pause");
	return 0;	
}