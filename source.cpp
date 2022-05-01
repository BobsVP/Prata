//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<valarray>
#include<vector>
#include<algorithm>

int main()  
{
	//using namespace std;
	std::vector<double> data;
	double temp;
	std::cout << "Enter numbers (0<= to quit):\n";
	while (std::cin >> temp && temp > 0)
		data.push_back(temp);
	std::sort(data.begin(), data.end());
	int size = data.size();
	std::valarray<double> numbers(size);
	int i;
	for ( i = 0; i < size; i++)
		numbers[i] = data[i];
	std::valarray<double> sq_rts(size);
	sq_rts = sqrt(numbers);
	std::valarray<double> result(size);
	result = numbers + 2.0 * sq_rts;
	std::cout.setf(std::ios_base::fixed);
	std::cout.precision(4);
	for ( i = 0; i < size; i++)
	{
		std::cout.width(8);
		std::cout << numbers[i] << ": ";
		std::cout.width(8);
		std::cout << result[i] << std::endl;
	}
	std::cout << "done.\n";
	return 0;
}

