#include<iostream>
#include<conio.h>
#include<unordered_set>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

void dublicate()
{//O(N^2),//O(NlogN)//O(N))
	vector<int> arr {1, 2, 3, 1, 3, 6, 6}; 
	unordered_set<int> hash; // hash table // non sortable 
	set<int> set; // hash - implementation - tree// sorted // dubplicates remove 

	for (int i = 0; i < arr.size(); i++)
	{
		if (find(hash.begin(), hash.end(), arr[i]) == hash.end())
		{
			hash.insert(arr[i]);
		}
		else
		{
			cout << arr[i]<<"\t"<<i<<"\n";
		}
	}
}

void max_subarray()
{
	vector<int> arr{ -2, -3, 4, -1, -2, 1, 5, -3 };
	int max_so_far = INT_MIN;
	int max_ending = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		max_ending = max_ending + arr[i];
		cout << max_ending << '\n';
		if (max_so_far < max_ending)
			max_so_far = max_ending;
		
		if (max_ending < 0)
			max_ending = 0;
	}
	cout <<"ANSWER ---- "<< max_so_far;
}






void repeat_missing()
{
	vector<int> arr{ 4, 3, 6, 2, 1, 1 };
	set<int> ordered;
	int sum = 0 , sum2=0;
	for (int i = 0; i < arr.size(); i++)
	{
		ordered.insert(arr[i]);
		sum2 = sum2 + arr[i];
	}
	int first = *ordered.begin(), last = *ordered.rbegin();
	int total_sum = (last / 2) * (first + last);
	for (auto i =ordered.begin(); i != ordered.end(); i++)
	{
		cout << *i;
		sum = sum + *i;
	}
	cout <<"\n Dublicate Element"<< sum2 - sum;
	cout << "\nMissing Element" << total_sum - sum;
}




void main()
{
	//dublicate();
	//repeat_missing();
	max_subarray();
}