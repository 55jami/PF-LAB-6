#include<iostream>
using namespace std;
float cost(string city, string product, float quantity);
int main()
{
	float quant;
	string ci;
	string prod;
	float output;
	cout << "Enter the city:";
	cin >> ci;
	cout << "Enter the product:";
	cin >> prod;
	cout << "Enter the quantity:";
	cin >> quant;
	output = cost(ci, prod, quant);
	cout << "Cost is" << output;

}
float cost(string city, string product, float quantity)
{
	float result;
	if (product == "coffee")
	{
		if (city == "sofia")
		{
			result = quantity * 0.5;
			return result;
		}
		else if (city == "plovdiv")
		{
			result = quantity * 0.40;
			return result;
		}
		else if (city == "varna")
		{
			result = quantity * 0.45;
			return result;
		}
	}
	if (product == "water")
	{
		if (city == "sofia")
		{
			result = quantity * 0.80;
			return result;
		}
		else if (city == "plovdiv" || city == "varna")
		{
			result = quantity * 0.70;
			return result;
		}
	}
	if (product == "beer")
	{
		if (city == "sofia")
		{
			result = quantity * 1.20;
			return result;
		}
		else if (city == "plovdiv")
		{
			result = quantity * 1.15;
			return result;
		}
		else if (city == "varna")
		{
			result = quantity * 1.10;
			return result;
		}
	}
	if (product == "sweets")
	{
		if (city == "sofia")
		{
			result = quantity * 1.45;
			return result;
		}
		else if (city == "plovdiv")
		{
			result = quantity * 1.30;
			return result;
		}
		else if (city == "varna")
		{
			result = quantity * 1.35;
			return result;
		}
	}
	if (product == "peanuts")
	{
		if (city == "sofia")
		{
			result = quantity * 1.60;
			return result;
		}
		else if (city == "plovdiv")
		{
			result = quantity * 1.50;
			return result;
		}
		else if (city == "varna")
		{
			result = quantity * 1.55;
			return result;
		}
	}
}