#include<iostream>
#include<conio.h>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<vector>
using namespace std;

void duplicate_array()
{
	//only one repeating element is present 
	//Sort the array and find the element adajcent to it 
	//First approach in mind is using set and passing the element in array and check weather it is existing in it or not
	vector<int> input{ 1,2,3,5,7 };
	set<int> dub_check;
	int i = 0, size = input.size();
	while (i < size)
	{
		if (find(dub_check.begin(), dub_check.end(), input[i]) != dub_check.end())
		{
			dub_check.insert(input[i]);
		}
		i++;
	}

}

void inversion()
{
	vector<int> input1{ 2,4,1,3,5 };
	int inversion = 0;
	for (int i = 0; i < input1.size(); i++)
	{
		for (int j = 0; j < input1.size(); j++)
		{
			if (input1[i] > input1[j] && i < j)
			{
				inversion++;
			}
		}
	}

	cout << "Total number of the inversion that can be created  form the array " << inversion;
}



//Hash Set 
void dublicate()
{
	vector<int> arr{ 1,2,3,1 };
	unordered_set<int> intSet;
	unordered_set<int> duplicate;
	for (int i = 0; i < arr.size()-1; i++)
	{
		// if element is not there then insert that 
		if (intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);

		// if element is already there then insert into 
		// duplicate set 
		else
			duplicate.insert(arr[i]);
	}
	unordered_set<int> ::iterator itr;
	for (itr = duplicate.begin(); itr != duplicate.end(); itr++)
	{
		cout << *itr;
	}

}




void findLeastNumOfUniqueInts() {
/*
    4,3,1,1,3,3,2  and K=3 
	 -  unodered map - occurances add in the second order 
	 - if the occurances are 1 only remove those elements and then remove any element 
7*/
	vector<int> arr{ 5,5,4 };
	int k = 1;
	unordered_map<int , int> mp;
	for (int i = 0; i < arr.size(); i++)
	{
		mp[arr[i]]++;
	}
	
	//remove the elements having only 1 occurances mesured 
	for (auto x : mp)
	{
		cout << x.first << " " << x.second;
	}
	
}

void jump_array_55()
{
	vector<int> arr{ 3,2,1,2,4,3,6,9,10 };
	int pointer = 1;
	int last = arr.size() - 1;
	while (pointer!= last)
	{
		int val = arr[pointer];
		pointer = pointer  + val;
		if (pointer > last || arr[pointer] == 0 )
		{
			cout << "False";
			return;
		}
	}
	cout << "True";
}








int main()
{
	//duplicate_array();
	//inversion();
	//findLeastNumOfUniqueInts();
	jump_array_55();
	return 0;
}