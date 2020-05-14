#include<iostream>
#include"Array.h"

using namespace std;

int main(int argc, char* argv[])
{
	stack s;
	queue q;
	s.clear();
	q.clear();

	cout << "press any key to demostrate push stack and into queue..." << endl;
	getchar();
	for (int i = 0; i < 10; i++) 
	{
		s.push(i);
		q.inqueue(i);
		cout << "stack: ";
		s.print();
		cout << "queue: ";
		q.print();
	}

	cout << "press any key to demostrate pop stack and out queue..." << endl;
	getchar();
	while (!s.empty() && !q.empty())
	{
		s.pop();
		q.outqueue();
		cout << "stack: ";
		s.print();
		cout << "queue: ";
		q.print();
	}
	getchar();
	return 0;
}