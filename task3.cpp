#include<iostream>
using namespace std;
float discount(string day, string month, float amount);
int main()
{
	int amount;
	string day;
	string month;
	float dis;
	cout << "Enter amount is:";
	cin >> amount;
	cout << "Enter day is:";
	cin >> day;
	cout << "Enter month is:";
	cin >> month;
	dis = discount(day, month, amount);
	cout << "Discount is:" << dis;
}
float discount(string day, string month, float amount)
{
	float payable;
	if (day == "sunday" && month == "october")
	{
			payable = amount - (amount * 10 / 100);
			return payable;
	}
	if (day != "sunday" && month=="october")
	{
			payable = amount;
			return payable;
	}
	return 0;
}