//#include</home/bobs/Prata/Header.h> 
#include<iostream>
#include<string>
#include<set>
#include<iterator>
#include<algorithm>

int main()  
{
	//using namespace std;
	const int N = 6;
	std::string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
	std::string s2[N] = {"metal", "any", "food", "elegant", "deliver", "for"};
	std::set<std::string> A(s1, s1 + N);
	std::set<std::string> B(s2, s2 + N);
	std::ostream_iterator<std::string, char> out(std::cout, " ");
	std::cout << "Set A: ";
	copy(A.begin(), A.end(), out);
	std::cout << std::endl;
	std::cout << "Set B: ";
	copy(B.begin(), B.end(), out);
	std::cout << std::endl;
	std::cout << "Union of A and B:\n";
	std::set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;
	std::cout << "Intersection of A and B:\n";
	std::set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;
	std::cout << "Difference of A and B:\n";
	std::set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
	std::cout << std::endl;
	std::set<std::string> C;
	std::cout << "Zet C:\n";
	std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::insert_iterator<std::set<std::string>>(C, C.begin()));
	copy(C.begin(), C.end(), out);
	std::cout << std::endl;
	std::string s3("grungy");
	C.insert(s3);
	std::cout << "Set C after insertion:\n";
	copy(C.begin(), C.end(), out);
	std::cout << std::endl;
	std::cout << "Showing a range:\n";
	std::copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
	std::cout << std::endl;
	return 0;
}

