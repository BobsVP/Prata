#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>

int main() 
 {
	 using std::string;
	 using std::cin;
	 using std::cout;
	 QueueTP<string> cs(5);
	 string temp;
	while (!cs.isfull())
	{
		cout << "Please enter your name. You will be"
				"served in the order of arrival.\n"
				"name: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	while (!cs.isempty())
	{
		cs.dequeue(temp);
		cout << "Now processing " << temp << "...\n";
	}
	cout << "The queue is full. Processing begins!\n";
	 return 0;
 }