#include <new>
#include <iostream>

using namespace std;

class Fred
{
private:
	int i,j;
public:
	Fred() : i(0), j(0)
	{
		cout << "Fred construct with i = " << i <<", j = " << j << endl;
	}
	~Fred()
	{
		cout << "Fred destruct." << endl;
	}
};

void someCode()
{
	char memory[sizeof(Fred)];
	void *place = memory;

	Fred* f = new(place) Fred();
	f->~Fred();	//explicitly call the destructor for the placed object
}

int main()
{
	someCode();
}

