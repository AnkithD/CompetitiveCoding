
#include <iostream>
#include <fstream>

#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <list>

#include <iterator>
#include <algorithm>
#include <numeric>

#define eps 1e-6
#define DEBUG(x) cout << ">>>" << #x << ':' << x << endl;

using namespace std;


int main() {
	ifstream iFile;
	iFile.open("A-large-practice.in");
	
	int cases;
	iFile >> cases;
	//DEBUG(cases)
	vector<unsigned long long> totals;
	for (int i = 0; i < cases; ++i)
	{
		unsigned long long total = 1;
		string input;
		iFile >> input;

		for (int i = 0; i < input.length(); ++i)
		{
			char a,b,c;

			b = input[i];
			if (i!=0)
				a = input[i-1]; 
			else
				a = b;
			if (i!=input.length()-1) 
				c= input[i+1]; 
			else 
				c = b;
			set<char> s;
			s.insert(a);
			s.insert(b);
			s.insert(c);
			total *= s.size();
			total %= 1000000007;

		}
		//DEBUG(total);
		totals.push_back(total);
	}

	iFile.close();

	ofstream oFile;
	oFile.open("output.txt");
	for (int i = 0; i < totals.size(); ++i)
	{
		oFile << "Case #" << i+1 << ": " << totals[i] <<endl;
	}
	oFile.close();

	return 0;
}