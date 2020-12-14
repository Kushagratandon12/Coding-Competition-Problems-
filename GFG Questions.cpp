#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<string.h>
#include<queue>
#include<deque>
#include<unordered_map>
#include<unordered_set>
 
using namespace::std;

void k_largest_ele()
{
	vector<int> elements{ 1,23,756,81,8 };
	vector<int> result;
	//priority queue for maintaing the elements
	// priority queue uses Heap Therefore traversing the heap and then taking the element out will be easy
	priority_queue<int> Heap;
	int k = 2;
	for (int i = 0; i < elements.size(); i++)
	{
		Heap.push(elements[i]);
	}
	while (k)
	{
		result.push_back(Heap.top());
		Heap.pop();
		k--;
	}
	cout << "Result For K Largest Element --- ";
	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << *i<<" " ;
	}
}

void next_greater_ele()
{
	vector<int> ar{ 1,3,2,4 };
	vector<int> result;
	queue<int> max_ele;
	for (int i = 1; i < ar.size(); i++)
	{
		if (ar[i - 1] < ar[i])
		{
			max_ele.push(ar[i]);
		}
	}
	for (int i = 0; i < ar.size()-1; i++)
	{
		int max = max_ele.front();
		if (ar[i] != max)
		{
			result.push_back(max);
		}
		else
		{
			max_ele.pop();
			max = max_ele.front();
			result.push_back(max);
		}
	}
	result.push_back(-1);
	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << *i;
	}
}


void edit_distance()
{
	string str1 = "fake";
	string str2 = "fame";
	unordered_set<char> hash_check;
	for (int i = 0; i < str1.size(); i++)
	{
		//O(n)
		hash_check.insert(str1[i]);
	}
	int min_edits = 0;
	for (int i = 0; i < str2.size(); i++)
	{
		//O(n)
		if (find(hash_check.begin(), hash_check.end(), str2[i]) == hash_check.end())
		{
			min_edits++;
		}
	}
	cout << "Number of Edits Required ----- " << min_edits;
}


void sliding_max_number()
{
	vector<int> nums{ 1, 3, -1, -3, 5, 3, 6, 7 };
	int k = 3;
	vector<int> result;
	deque<int> dq;
	for (int i = 0; i < nums.size(); i++)
	{
		// mataing the maximum number seen so far in the queue 
		while (dq.size() && nums[i] >= nums[dq.back()])
		{
			cout << dq.front();
			dq.pop_back();
		}
		dq.push_back(i);

		if (dq.front() == i - k)
			dq.pop_front();

		if (i >= k - 1)
			result.push_back(nums[dq.front()]);
	}

	cout << "Result";
	for (auto i = result.begin(); i != result.end(); i++)
	{
		cout << "\n";
		cout << *i;
	}
}


void minimum_energy()
{
	vector<int> energy_level{4,-10,4,4,4};
	int sum = 0; 
	if (energy_level[0] < 0)
	{
		cout << "The Initial Energy of The System Should Be  "<<(-(energy_level[0]) + 1);
		return;
	}
	for (int i = 0; i < energy_level.size(); i++)
	{
	  // sum =4    
      // i = 3
		if (energy_level[i] < 0 )
		{
			sum = sum + energy_level[i];
			if (sum <0)
			{
				cout<<"The Initial Energy of The System Should Be  "<< ((-sum) + 1);
				return;
			}
			else if(sum==0)
			{
				cout << "The Initial Energy of The System Should Be  "<< 1;
				return;
			}
			else
			{
				sum = sum;
			}
		}
		else
		{
			sum = sum + energy_level[i];
		}
	}
	cout << "The Initial Energy of The System Should Be  " << 1;
}


void first_negative_window()
{
	vector<int> arr{-8,2,3,-6,10 };
	int k = 2;
	deque<int> dq;
	int i=0;
	for (i = 0; i < k; i++)
	{
		if(arr[i]<0)
		dq.push_back(i);
	}
	for (; i < arr.size(); i++)
	{
		if (!dq.empty())
			cout << arr[dq.front()]<<" ";
		else
			cout << 0<<" ";
		while ((!dq.empty()) && dq.front() < (i - k + 1))
			dq.pop_front();
		if (arr[i] < 0)
			dq.push_back(i);
	}
	if (!dq.empty())
		cout << arr[dq.front()] << " ";
	else
		cout <<0;

}


void nuts_bolts()
{
	char nuts[] = { '@', '#', '$', '%', '^', '&' };
	char bolts[] = { '$', '%', '&', '^', '@', '#' };
	int size = 6;
	unordered_map<char, int> hash;
	for (int i = 0; i < size; i++)
	{
		hash[nuts[i]] = i;
	}
	for (int i = 0; i < size; i++)
		if (hash.find(bolts[i]) != hash.end())
			nuts[i] = bolts[i];
	// print the result 
	cout << "matched nuts and bolts are-" << endl;
	for (int i = 0; i < size; i++)
		cout << nuts[i] << " ";
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << bolts[i] << " ";
}



void find_transition_point()
{
	// create sorted array
	vector<int> arr{0,0,1,1,1};
	for (int i = 1; i < arr.size(); i++)
	{
		int p1 = i;
		int p2 = p1 - 1;
		if (arr[p2] != arr[p1])
		{
			cout<<"The Transiton can be find out at" << p1;
			return;
		}
		
	}
	cout << "There Is No transition point , hence therefore" << -1;

}

void count_nos_hops()
{
  //Frog Jumping 1 , 2 , 3 steps to the top 
	int number_of_steps = 5;
	int ar[6];
	ar[0] = 1; ar[1] = 1; ar[2] = 2;
	for (int i = 3; i <=number_of_steps; i++)
	{
		ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3];
	}
	cout << "Total Number Of Steps Frog Will Jump Will Be" << ar[number_of_steps];

}

void once_in_sorted_array()
{
	vector<int> arr{ 1,1,2,2,3,3,4,50,50,65,65 };
	int nos = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		nos = nos ^ arr[i];
	}
	cout <<"The Number Which Has Appered Only Once Is "<< nos;
}

void reach_given_score()
{
	int n = 20;
	int number_arr[40] = { 0 };
	number_arr[0] = 1;
	for (int i = 3; i<=n; i++)
	{
		number_arr[i] += number_arr[i - 3];
	}
	for (int i = 5; i<=n; i++)
	{
		number_arr[i]+= number_arr[i - 5];
	}
	for (int i = 10; i<=n; i++)
	{
		number_arr[i]+= number_arr[i - 10];
	}
	cout<<number_arr[n];
}


void reverse_first_k_queue()
{
	int k = 3;
	queue<int> input_q; 
	input_q.push(1);
	input_q.push(2);
	input_q.push(3);
	input_q.push(4);
	input_q.push(5);
	stack<int>first_k_store; 
	while (k--)
	{
		first_k_store.push(input_q.front());
		input_q.pop();
	}
}



void findlarge()
{
	vector<int> arr{ 10,11,7,12,14 };
	sort(arr.begin(), arr.end());
	cout <<  arr[arr.size() - 1] - arr[0];
}

void  closeness_name()
{
	string name1 = "Amitabh";
	string name2 = "Ajitabh";
	int score1 = 0;
	int score2 = 0;
	for (int i = 0; i < name1.size(); i++)
	{
		if (name1[i] == name2[i])
		{
			score1 = score1 + 2;
		}
	}
	//cout << score1;
	unordered_map<char, int> maping;
	unordered_map<char, int> maping2;
	for (int i = 0; name1[i]; i++)
	{
		maping.insert(make_pair(name1[i], i));
	}

	for (int i = 0; name2[i]; i++)
	{
		maping2.insert(make_pair(name2[i], i));
	}

	unordered_map<char, int>::iterator got;
	unordered_map<char, int>::iterator get;

}








int main()
{
	//cout << "Geeks For Geeks Question\n\n\n";
	//k_largest_ele();
	//next_greater_ele();
	//edit_distance();
	//sliding_max_number();
	//minimum_energy();
	//first_negative_window();
	//nuts_bolts();
	//find_transition_point();
	//count_nos_hops();
	//once_in_sorted_array();
	//reach_given_score();
	//closeness_name();
	findlarge();
	return 0;
}