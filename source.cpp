//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<cfloat>
double hmean(double a, double b);

int main()  
{
	 double x, y, z;
	 std::cout << "Enter two numbers: ";
	 while (std::cin >> x >> y)
	 {
		try
		{
			z = hmean(x, y);
		}
		catch(const char* s)
		{
			std::cout << s << '\n';
			std::cout << "Enter next set of numbers (q to quit): ";
			continue;
		}
		std::cout << "Harmonic mean of " << x << " and " << y
		 				<< " is " << z << std::endl;
			std::cout << "Enter next set of numbers (q to quit): ";
	 }
	 std::cout << "Bye!\n";
	 return 0;
 }
 double hmean(double a, double b)
 {
	if (a == -b)
		throw "Bad hmean() arguments: a = -b not allowed";
	return (2.0 * a * b) / (a + b);
 }
