//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<list>
#include<algorithm>

void Show(int);
const int LIM = 10;

int main()  
{
	//using namespace std;
	int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
	std::list<int> la(ar, ar + LIM);
	std::list<int> lb(la);
	std::cout << "Original list content:\n\t";
	std::for_each(la.begin(), la.end(), Show);
	std::cout << std::endl;
	la.remove(4);
	std::cout << "After using the remove() method:\n";
	std::cout << "la:\t";
	std::for_each(la.begin(), la.end(), Show);
	std::cout << std::endl;
	std::list<int>::iterator last;
	last = remove(lb.begin(), lb.end(), 4);
	std::cout << "After using the remove() function:\n";
	std::cout << "lb:\t";
	std::for_each(lb.begin(), lb.end(), Show);
	std::cout << std::endl;
	lb.erase(last, lb.end());
	std::cout << "After using the erase() method:\n";
	std::cout << "lb:\t";
	std::for_each(lb.begin(), lb.end(), Show);
	std::cout << std::endl;
	return 0;
}

void Show(int v)
{
	std::cout << v << " ";
}