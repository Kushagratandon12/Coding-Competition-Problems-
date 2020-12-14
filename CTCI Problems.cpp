#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
#include<unordered_set>

using namespace std;

int powerab(int a, int b)
{
	if (b < 0)
		return 0;
	else if (b == 0)
		return 1;
	else
		return a * powerab(a, b - 1);
}

int modulus(int a, int b)
{
	if (b < 0)
		return -1;
	int div = a / b;
	return (a - (div * b));
}

int square_root(int n, int min, int max)
{
	if (max < min)
		return -1; 
	int guess = (min + max) / 2; 
	if (guess * guess == n)
		return guess;
	else if (guess * guess < n)
		return square_root(n, guess + 1, max);
	else
		return square_root(n, 1, guess - 1);
}

//ARRAY CTCI() QUESTION
void pair_arr()
{
	vector<int> array {1, 5, 3, 4, 2};
	int k = 3;
	unordered_set<int> array_ele;
	int pair = 0;
	//populating the array elements into the sets
	for (int i = 0; i < array.size(); i++)
	{
		array_ele.insert(array[i]);
	}
	//checking the elements and check weather its difference is present or not 
	for (int i = 0; i < array.size(); i++)
	{
		if (find(array_ele.begin(), array_ele.end(), (k-array[i])) != array_ele.end())
		{
			cout << array[i] << (array[i] - k);
			cout << "\n";
		}
	}

}

void permutation_string()
{
	string str = "abcdefgh";
	string per_str = "ghfedcaba";
	int  count_words[256] = {0};
	for (int i = 0; i < str.size(); i++)
	{
		count_words[str[i]]++;
		count_words[per_str[i]]--;
	}
	for (int i = 0; i < 256; i++)
	{
		if (count_words[i])
		{
			cout << "Not A Permutation";
			return;
		}
		else
		{
			cout << "Permutation";
			return;
		}
	}
}


void one_way()
{
	string str1 = "pale";
	string str2 = "break";
	int diff = 0;
	unordered_set<char> one_way;
	//filling up the unordered set with the elements of strings2
	for (int i = 0; i < str2.size(); i++)
	{
		one_way.insert(str2[i]);
	}
	for (int i = 0; i < str1.size(); i++)
	{
		if (find(one_way.begin(), one_way.end(), str1[i]) == one_way.end())
		{
			diff++;
		}
	}

	if (diff > 1)
		cout << "Not One Way Away";
	else
		cout << "One Way Away";

}



void rotate_martix_90()
{
	vector<vector<int>> matrix{ {1,2,3} , {4,5,6} , {7,8,9} };
	// we will be doing 4 step swapping of the values ;
	int n = 3;
	for (int i=0;i<n/2;i++)
	{
		for (int j = i; j < n - i - 1; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[n - 1 - j][i];
			matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
			matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
			matrix[j][n - 1 - i] = temp;
		}
	}

}


void string_rotation()
{
	string s1 { "waterbottel" };
	string s2 { "erbottelwa" };

	string s3 = s1 + s2; // ----waterbottelwaterbottel;
	if (s3.find(s2))
	{
		cout << "True";
		return;
	}
	cout << "False";
}



void shuffle_array()
{
	vector<int> arr
	{ 2, 5, 1, 3, 4, 7 };
	int n = 3;
	//every third item is y1 -- 
	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		res.push_back(arr[i]);
		res.push_back(arr[i + 3]);
	}
	for (auto i = res.begin();i!=res.end();i++)
	{
		cout << *i;
	}


}



 
void main()
{
//	int a = powerab(5, 2);
	//cout <<"\n Power a^b --- " << a << "\n";
	//int b = modulus(4, 2);
	//cout << "\n Modulus a%b ----" << b << "\n";
	//cout << "\n\n\n\nPair Question"<<"\n";
	//pair_arr();
    //permutation_string();
	//one_way();
	//string_rotation();
	shuffle_array();
	return; 
}