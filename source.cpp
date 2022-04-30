//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
#include<cctype>

char toLower(char ch) {return tolower(ch);}
std::string& ToLower(std::string& st);
void display(const std::string& s);

int main()  
{
	//using namespace std;
	std::vector<std::string> words;
	std::cout << "Enter words (enter quit to quit):\n";
	std::string input;
	while (std::cin >> input && input != "quit")
		words.push_back(input);
	std::cout << "You entered the following words:\n";
	std::for_each(words.begin(), words.end(), display);
	std::cout << "\n";
	std::set<std::string> wordset;
	std::transform(words.begin(), words.end(), std::insert_iterator<std::set<std::string>>(wordset, wordset.begin()), ToLower);
	std::cout << "\nAlphabetic list of words:\n";
	std::for_each(wordset.begin(), wordset.end(), display);
	std::cout << std::endl;
	std::map<std::string, int> wordsmap;
	std::set<std::string>::iterator si;
	for (si = wordset.begin(); si != wordset.end(); ++si)
		wordsmap[*si] = std::count(words.begin(), words.end(), *si);
	std::cout << "\nWords frequency:\n";
	for (si = wordset.begin(); si != wordset.end(); ++si)
		std::cout << *si << ": " << wordsmap[*si] << std::endl;
	return 0;
}

std::string& ToLower(std::string& st)
{
	std::transform(st.begin(), st.end(), st.begin(), toLower);
	return st;
}
void display(const std::string& s)
{
	std::cout << s << " ";
}
