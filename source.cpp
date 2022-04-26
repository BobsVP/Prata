//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>
#include<algorithm>

int main()  
{
	//using namespace std;
	std::string letters;
	std::cout << "Enter the letter grouping (quit to quit): ";
	while (std::cin >> letters && letters != "quit")
	{
		std::cout << "Permutations of " << letters << std::endl;
		sort(letters.begin(), letters.end());
		std::cout << letters << std::endl;
		while (std::next_permutation(letters.begin(), letters.end()))
			std::cout << letters << std::endl;
		std::cout << "Enter next sequence (quit to quit): ";
	}
	std::cout << "Done.\n";
	return 0;
}
