#pragma once
#define MAXN 100
class Array
{
private:
	Array(const Array&) {};
	void operator=(const Array&) {};
protected:
	int array[MAXN];
	int top, tail;
public:
	Array();
	virtual ~Array();
	bool empty();
	void clear();
	void print();
};
class stack :public Array {
private:
	stack(const stack&) {};
	void operator = (const stack&) {};
public:
	stack();
	int pop();
	void push(int value);
};
class queue :public Array {
private:
	queue(const queue&) {};
	void operator = (const stack&) {};
public:
	queue();
	int outqueue();
	void inqueue(int value);
};
