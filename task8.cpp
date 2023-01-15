#include<iostream>
using namespace std;
string checkspeed(float num);
int main()
{
	float num;
	string sp;
	cout << "Enter speed is:";
	cin >> num;
	sp = checkspeed(num);
	cout << "Speed is:" << sp;
}
string checkspeed(float num)
{
	string s;
	if (num <= 10)
	{
		s = "slow";
		return s;
	}
	else if (num > 10 && num <= 50)
	{
		s = "average";
		return s;
	}
	else if (num > 50 && num <= 150)
	{
		s = "fast";
		return s;
	}
	else if (num > 150 && num <= 1000)
	{
		s = "ultra fast";
		return s;
	}
	else
	{
		s = "Extremely fast";
		return s;
	}
}