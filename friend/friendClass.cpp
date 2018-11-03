#include <iostream>

using namespace std;

class C
{
private:
	int size;
	int *data;
public:
	C(int size, int *data)
	{
		this->size = size;
		this->data = new int[size];
		for(int i = 0; i < size; ++i)
		{
			this->data[i] = data[i];
		}
	}
	~C()
	{
		delete[] data;
		data = NULL;
	}
	friend class friendC;
	double operator[] (int i) const
	{
		return data[i];
	}
};

class friendC
{
private:
	int friendSize;
	int *friendData;
public:
	friendC(const C &c)
	{
		friendSize = c.size;
		friendData = new int[friendSize];
		for(int i = 0; i < friendSize; ++i)
		{
			friendData[i] = c[i];
		}
	}
	~friendC()
	{
		delete[] friendData;
		friendData = NULL;
	}
	void printData()
	{
		for(int i = 0; i < friendSize; ++i)
		{
			cout << friendData[i] << " ";
		}	
		cout << "\n";
	}
};


int main()
{
	int data[5] = {1, 2, 3, 4, 5};
	C c(5, data);
	friendC fri(c);
	fri.printData();
	return 0;
}
