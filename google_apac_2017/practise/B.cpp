
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
#define DEBUG(x) cout << ">>>" << #x << ':' << x << endl

using namespace std;

template <typename T>
void DEBUGCONTAINER(T item) {
	cout << endl <<">>>[";
	for(auto i : item) {
		cout << i << ", ";
	}
	cout << "]" << endl;
}

using namespace std;


int main() {
	ifstream iFile;
	iFile.open("B-large-practice.in");
	 int cases;

	 iFile >> cases;
	 vector<long long int> totals;
	 for (int i = 0; i < cases; ++i)
	 {
	 	int n;
	 	long long int k;
	 	iFile >> n >> k;
	 	long long int a[n],b[n],c[n],d[n];
	 	for (int i = 0; i < n; ++i)
	 	{	
	 		iFile >> a[i];
	 	}
	 	for (int i = 0; i < n; ++i)
	 	{
	 		iFile >> b[i];
	 	}
	 	for (int i = 0; i < n; ++i)
	 	{
	 		iFile >> c[i];
	 	}
	 	for (int i = 0; i < n; ++i)
	 	{
	 		iFile >> d[i];
	 	}

	 	map<long long int, int> ab;

	 	ab.clear(); 

	 	for (int i = 0; i < n; ++i)
	 	{
	 		for (int j = 0; j < n; ++j)
	 		{
	 			ab[a[i]^b[j]]++;
	 		}
	 	}
	 	long long int temp = 0;
	 	long long int total = 0;
	 	for (int i = 0; i < n; ++i)
	 	{
	 		for (int j = 0; j < n; ++j)
	 		{
	 			temp = c[i]^d[j]^k;
	 			if (ab.find(temp)!=ab.end())
	 				total += ab[temp];
	 		}
	 	}

	 	//DEBUGCONTAINER(ab);
	 	//DEBUGCONTAINER(cd);
	 	
	 	
	 	totals.push_back(total);

	 	DEBUG("CASE FINISHED");
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