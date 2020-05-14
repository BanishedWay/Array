#include "Array.h"
#include<iostream>
#include<cstring>

using namespace std;

Array::Array()
{
	top = 0;
	tail = 1;
	memset(array, 0, MAXN);
	return;
}


Array::~Array()
{
}

bool Array::empty()
{
	if (top == 0 || (tail - top) == 1)
		return true;
	return false;
}

void Array::clear()
{
	memset(array, 0, MAXN);
}

void Array::print()
{
	for (int i = tail; i <= top; i++)
	{
		cout << this->array[i] << " ";
	}
	cout << endl;
	return;
}

stack::stack()
{
}

int stack::pop()
{
	int value = this->Array::array[top];
	top--;
	return value;
}

void stack::push(int value)
{
	top++;
	this->Array::array[top] = value;
	return;
}

queue::queue()
{
}

int queue::outqueue()
{
	int value = this->Array::array[tail];
	tail++;
	return value;
}

void queue::inqueue(int value)
{
	top++;
	this->Array::array[top] = value;
	return;
}
