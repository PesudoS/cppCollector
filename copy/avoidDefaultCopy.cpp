#include <iostream>
using namespace std;

class CExample
{
private:
	int a;

public:
	//constructor
	CExample(int b)
	{
		a = b;
	}

private:
	//copy constructor
	CExample(const CExample& C);

public:
	//deconstructor
	~CExample()	
	{
		cout << "delete: " << a << endl;		
	}

	void show()
	{
		cout << a << endl;
	}
};

// global function, pass the object
void g_Fun(CExample C)
{
	cout << "test" << endl;
}

CExample g_Fun()
{
	CExample test(1);
	g_Fun(test);

	return 0;
}

int main()
{
	//CExample A(100);
	//CExample test(1);
	//CExample B = A;	//copy constructor
	//CExample B(A);
	//B.show(); 
	//g_Fun(test);
	g_Fun();
	return 0;
}
