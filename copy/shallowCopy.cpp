#include <iostream>

using namespace std;

class Rect
{
public:
	Rect()	//constructor, p points to the allocated memory of heap
	{
		p = new int(100);
	}

	~Rect()	//deconstructor, free dynamically allocated memory
	{
		if(p != NULL)
		{
			delete p;
			p = NULL;
		}
	}

private:
	int width;
	int height;
	int *p;	
};

int main()
{
	Rect rect1;
	Rect rect2(rect1);
	return 0;
}
