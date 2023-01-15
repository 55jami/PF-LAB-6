#include<iostream>
using namespace std;
float minimum_cost(int kilo, string time);
int main()
{
	int kilometers;
	string time;
	float result;
	cout << "Enter kilometers are:";
	cin >> kilometers;
	cout << "Enter time is:";
	cin >> time;
	result = minimum_cost(kilometers, time);
	cout << "Cheapest price is:" << result;


}
float minimum_cost(int kilo, string time)
{
	float tax_day = 0.79;
	float tax_night = 0.90;
	float bus_rate = 0.09;
	float train_rate = 0.06;
	float result1;
	float result2;
	float result3;
	if (kilo < 20)
	{
		if (time == "night")
		{
			result1 = kilo * tax_night;
		}
		else if(time=="day")
		{
			result1 = kilo * tax_day;
		}
	}
	
	if (kilo > 20 && kilo < 100)
	{
		if (time == "day")
		{
			result2 = kilo * bus_rate;
		}
		else if (time == "night")
		{
			result2 = kilo * bus_rate;
		}

	}
	if (kilo > 100)
	{
	if(time =="day")
	{
		result3 = kilo * train_rate;
	}
	else if(time == "night")
	{
		result3 = kilo * train_rate;
	}
	}
	if (result1 < result2 || result1 < result2)
	{
		return result1;
	}
	if (result2 < result1 || result2 < result3)
	{
		return result2;
	}
	if (result3 < result1 || result3 < result2)
	{
		return result3;
	}
}