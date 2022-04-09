//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>
#include<vector>

const int NUM = 5;

int main()  
{
	using std::vector;
	using std::string;
	using std::cout;
	using std::cin;
	using std::endl;
	vector<int> Rating(NUM);
	vector<string> titles(NUM);
	cout << "You will do exactly as told. You will enter\n" << NUM << " book titles and your ratings (0-10).\n";
	int i;
	for (i = 0; i < NUM; i++)
	{
		cout << "Enter title #" << i + 1 << ": ";
		getline(cin, titles[i], '\n');
		cout << "Enter your rating(0-10): ";
		cin >> Rating[i];
		cin.get();
	}
	cout << "Thank you. You entring the following:\n" << "Rating\tBook\n";
	for (i = 0; i < NUM; i++)
		cout << Rating[i] << "\t" << titles[i] << endl;
	return 0;
}

