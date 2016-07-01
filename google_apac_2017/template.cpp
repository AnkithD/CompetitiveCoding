using namespace std;

#include <iostream>
#include <fstream>
ios::sync_with_stdio(false);

//#include <string>
//#include <vector>
//#include <map>
//#include <set>
//#include <deque>
//#include <list>

//#include <iterator>
//#include <algorithm>
//#include <numeric>

#define eps 1e-6
#define DEBUG(x) cout << ">>>" << #x << ':' << x << endl
#define i64 long long int
#define ui64 unsigned long long int
#define nend "\n"
#define pb push_back
#define mp make_pair

template <typename T>
void DEBUGCONTAINER(T item) {
	cout << endl <<">>>[";
	for(auto i : item) {
		cout << i << ", ";
	}
	cout << "]" << endl;
}
template <typename T>
void DEBUGARRAY(T item, int size) {
	cout << endl <<">>>[";
	for(int i = 0;i < size; ++i) {
		cout << item[i] << ", ";
	}
	cout << "]" << endl;
}


int main() {
	ifstream iFile;
	iFile.open("input.in");
	long long int cases;
	vector<long long int> totals;
	iFile >> cases;

	for (int i = 0; i < cases; ++i)
	{
		
	}
	
	iFile.close();

	ofstream oFile;
	oFile.open("output.out");
	for (int i = 0; i < totals.size(); ++i)
	{
		oFile << "Case #" << i+1 << ": " << totals[i] <<endl;
	}
	oFile.close();

	return 0;
}