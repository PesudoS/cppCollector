#include <iostream>
#include <cstdio>

using namespace std;

class A
{
public:
	A() : var(-1), test(-1)	
	{
		pi = new int(-1);
		pd = new double(0);
	//	file = fopen("../test", "r");
	}
	A(int v, int t) : var(v), test(t)
	{
		pi = new int(-1);
		pd = new double(0);
	//	file = fopen("../test", "r");
	}	
	~A()
	{
		delete pi;
		delete pd;
	//	fclose(file);
	}
private:
	int var;
	int test;
	int *pi;
	double *pd;
	//FILE *file;
};

int main()
{
	//int *p = (int *)operator new(sizeof(int));
	//cout << "Before initializing: " << *p << endl;
	//*p = 100;
	//cout << "After initializing: " << *p << endl;
	//operator delete(p);

	/*	
	int *pia = new int[10];
	cout << "Integer array: ";
	for(int i = 0; i < 10; ++i)
	{
		cout << pia[i] << " ";
	}
	cout << endl;
	*/
	A *pa = new A[40];
	int *pi = new int[9];
	cout << "The allocated memory of array A is " << pa 
		<< " " << pa + 1 << " " << pa + 2 << endl;
	cout << "The allocated int array is " << pi << pi + 1 << endl;
	cout << "The array size is " << *(reinterpret_cast<int *>(pa) - 2)  << endl;
	//cout << "Size of long long is " << sizeof(long long) << endl;
	//cout << "Size of FILE* is " << sizeof(FILE *) << endl;
	cout << "Size of A is " << sizeof(A) << endl;
	delete []pa;
	//delete pa;
	return 0;
}

