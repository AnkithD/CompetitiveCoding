using namespace std;
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
	long long int totals;
	iFile >> cases;

	ofstream oFile;
	oFile.open("output.out");

	for (int i = 0; i < cases; ++i)
	{
		long long int n;
		int q;
		iFile >> n >> q;

		int arr[n];

		for (long long int i = 0; i < n; ++i)
		{
			iFile >> arr[i];
		}

		//DEBUGARRAY(arr, n);
		pair<long long int, long long int> ques[q];
		for (int i = 0; i < q; ++i)
		{
			iFile >> ques[i].first >> ques[i].second;
		}

		multiset<int> sums;
		long long int temp = 0;
		for (long long int len = 1; len <= n; ++len)
		{
			for (long long int start = 0; start+len <= n; ++start)
			{
				temp = 0;
				for (long long int i = 0; i < len; ++i)
				{
					temp += arr[start + i];
				}
				sums.insert(temp);
			}
		}
		//DEBUGCONTAINER(sums);
		oFile << "Case #" << i+1 << ":" << endl;
		for (int i = 0; i < q; ++i)
		{
			long long temp = 0;
			auto j = sums.begin();
			advance(j, ques[i].first-1);
			for (int k = ques[i].first; k <= ques[i].second; ++k)
			{
				temp += *j;
				++j;
			}
			oFile << temp << endl;
		}
	}
	
	iFile.close();

	oFile.close();

	return 0;
}