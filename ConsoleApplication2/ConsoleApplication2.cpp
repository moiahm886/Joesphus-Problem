#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>josephus;
	for (int i = 0; i < 41; i++)
	{
		josephus.push_back(i + 1);
	}
	int k = 0;
	int start = 0;
	do
	{
		cout << "Enter start point\n";
	    cin >> start;
    }while (start > josephus.size());
	cout << "Enter the gap\n";
	cin >> k;
	int hello = josephus.size() - 1;
	for (int i = 0; i < hello; i++)
	{
		josephus.erase(josephus.begin() + start);
		start += k;
		start %= josephus.size();
	}
	cout << "The person to survive would be ";
	for (auto x : josephus)
	{
		cout << x << "\t";
	}
}