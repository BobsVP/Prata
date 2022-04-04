//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>

int main()  
{
	using namespace std;
	string empty;
	string small = "bit";
	string larger = "Elephants are а girl's best friend";
	cout << "Sizes:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarger: " << larger.size() << endl;
	cout << "Capasities:\n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarger: " << larger.capacity() << endl;
	empty.reserve(50);
	cout << "Capasity after empty.reserve(50): "
		<< empty.capacity() << endl;
	return 0;
}

