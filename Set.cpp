#include<iostream>
#include<conio.h>
#include<set>

using namespace std;

int main()
{

	set<int> S;
	S.insert(2);
	S.insert(-1);
	S.insert(-5);
	S.insert(0);

	for (auto i = S.begin(); i != S.end(); i++)
	{
		cout << *i;
	}



	return 0;
}
