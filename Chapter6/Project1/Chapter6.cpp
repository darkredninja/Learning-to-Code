#include <iostream>
#include <string>
using namespace std;

//The &(Referance operator) shows the computer memory in HEXADECIMAL format.
void Address()
{
	int num = 100;
	double sum = 0.0123456789;
	string text = "C++ Fun";

	cout << "Integer variable starts at: " << &num << "\n";
	cout << "Double variable starts at: " << &sum << "\n";
	cout << "String variable starts at: " << &text << "\n";
}

/*Pointers are efficent because it stores the memory address of other variables.
They are declared with a * and this will be a pointer. A pointer variable is
initlized by assigning it to the memory address of another variable using the
& operator. Referencing a pointer variable by its name alone will simply 
reveal the memory address that it contains. After a pointer variable has been 
initilized, either in the declaration or by a subsequent assignment, it "points"
to the variable at the address which it contains. This means that the value of the 
variable to which it points can be referenced by prefixing the pointer name with the
* dereference operator.*/
void deref()
{
	int a = 8, b = 16;
	int* aPtr = &a;				//aPtr is assigned to the address of a.
	int* bPtr;
	bPtr = &b;					//bPtr is assigned to the address of b.

	cout << "\nAddresses of pointers...\n";
	cout << "aPtr: " << &aPtr << "\n";
	cout << "bPtr: " << &bPtr << "\n\n";

	cout << "Values of pointers...\n";
	cout << "aPtr: " << aPtr << "\n";
	cout << "bPtr: " << bPtr << "\n\n";

	cout << "Values in address pointed to...\n";
	cout << "aPtr: " << *aPtr << "\n";
	cout << "bPtr: " << *bPtr << "\n\n";
}

/*Pointer Arithmetic*/
void point()
{
	int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr = nums;

	cout << "\nptr at: " << ptr << " gets: " << *ptr;
	ptr++;

	cout << "\nptr at: " << ptr << " gets: " << *ptr;
	ptr++;

	cout << "\nptr at: " << ptr << " gets: " << *ptr;
	ptr -= 2;

	cout << "\nptr at: " << ptr << " gets: " << *ptr << "\n";

	for (int i = 0; i < 10; i++)
	{
		cout << "\nElement: " << i;
		cout << "\tValue: " << *ptr;
		ptr++;
	}
	cout << endl;
}

int main()
{
	//Address();
	//deref();
	point();
	system("pause");
	return 0;
}