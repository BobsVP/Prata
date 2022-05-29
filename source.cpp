#include<sstream>
#include<iostream>
#include<string>

int main()
{
using namespace std;
ostringstream outstr;
string hdisc;
cout << "What's the name of your hard disc? ";
getline(cin, hdisc);
int cap;
cout << "What's its capasity in GB? ";
cin >> cap;
outstr << "The hard disc " << hdisc << " has a capasity of " << cap << " gigabytes.\n";
string result = outstr.str();
cout << result;
return 0;
}