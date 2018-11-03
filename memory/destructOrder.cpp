#include <iostream>

using namespace std;

class base0
{
public:
	base0()
	{
		cout << "base0 construct." << endl;	
	}
	~base0()
	{
		cout << "base0 destruct." << endl;
	}
};

class base1
{
public:
	base1()
	{
		cout << "base1 construct." << endl;	
	}
	~base1()
	{
		cout << "base1 destruct." << endl;
	}
};

class member0
{
public:
	member0()
	{
		cout << "member0 construct." << endl;
	}
	~member0()
	{
		cout << "member0 destruct." << endl;
	}
};

class member1
{
public:
	member1()
	{
		cout << "member1 construct." << endl;
	}
	~member1()
	{
		cout << "member1 destruct." << endl;
	}
};

class local0
{
public:
	local0()
	{
		cout << "local0 construct." << endl;
	}
	~local0()
	{
		cout << "local0 destruct." << endl;
	}
};

class local1
{
public:
	local1()
	{
		cout << "local1 construct." << endl;
	}
	~local1()
	{
		cout << "local1 destruct." << endl;
	}
};

class derived : base0, base1
{
private:
	member0 m0_;
	member1 m1_;
public:
	derived()
	{
		cout << "derived construct." << endl;
	}
	~derived()
	{
		local0 l0;
		local1 l1;
		cout << "derived destruct." << endl;
	}
};

void userCode()
{
	derived d;
}

int main()
{
	userCode();
	return 0;
}
