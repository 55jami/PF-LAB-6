#include<iostream>
using namespace std;
int fun(float budget, string category, int no_of_people);
int main()
{
	float budget;
	string category;
	int no_of_people;
	cout << "Enter the budget: ";
	cin >> budget;
	cout << "enter category of tickets you want: ";
	cin >> category;
	cout << "enter the number of people: ";
	cin >> no_of_people;
	fun(budget,category,no_of_people);
	return 0;
}
int fun(float budget, string category, int no_of_people)
{
	float transport;
	float ticket_fair_normal=no_of_people*249.99;
	float ticket_fair_vip = no_of_people * 499.99;
	if (no_of_people >= 1 || no_of_people <= 4 && category == "vip")
	{
		transport= (budget / 100) * 75;
		budget = budget - transport;
		
		if (budget>(ticket_fair_vip))
		{
			cout << "Yes! You have " << budget - (no_of_people * 499.99) << " QR left";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 499.99 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 5 || no_of_people <= 9 && category == "vip")
	{
		budget = budget - (budget / 100) * 60;
		if (budget >(ticket_fair_vip))
		{
			cout << "Yes! You have " << (budget - no_of_people * 499) << " QR";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 499 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 10 || no_of_people <= 10 && category == "vip")
	{
		budget = budget - (budget / 100) * 50;
		if (budget >(ticket_fair_vip))
		{
			cout << "Yes! You have " << (budget - no_of_people * 499) << " QR";
			
		}
		else
		{
			cout << "Not enough money! You need " << no_of_people * 499 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 25 || no_of_people <= 49 && category == "vip")
	{
		budget = budget - (budget / 100) * 40;
		if (budget > (ticket_fair_vip))
		{
			cout << "Yes! You have " << (budget - no_of_people * 499) << " QR";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 499 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 50 && category == "vip")
	{
		budget = budget - (budget / 100) * 60;
		if (budget > ticket_fair_vip)
		{
			cout << "Yes! You have " << (budget - no_of_people * 499) << " QR";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 499 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 1 || no_of_people <= 4 && category == "normal")
	{
		transport = budget - (budget / 100) * 75;
		budget = budget - transport;
		if (budget > ticket_fair_normal)
		{
			cout << "Yes! You have " << (budget - no_of_people * 249) << " QR";
		}
		else
		{
		
			cout << "Not enough money! You need " << ticket_fair_normal << " QR";
		}
		return 0;
	}
	if (no_of_people >= 5 || no_of_people <= 9 && category == "normal")
	{
		budget = budget - (budget / 100) * 60;
		if (budget > ticket_fair_normal)
		{
			cout << "Yes! You have " << (budget - no_of_people * 249) << " QR";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 249 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 10 || no_of_people <= 10 && category == "normal")
	{
		budget = budget - (budget / 100) * 50;
		if (budget > ticket_fair_normal)
		{
			cout << "Yes! You have " << (budget - no_of_people * 249) << " QR";
		}
		else
		{
			cout << "Not enough money! You need " << no_of_people * 249 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 25 || no_of_people <= 49 && category == "normal")
	{
		budget = budget - (budget / 100) * 40;
		if (budget > ticket_fair_normal)
		{
			cout << "Yes! You have " << (budget - no_of_people * 249) << " QR";
		}
		else
		{
			
			cout << "Not enough money! You need " << no_of_people * 249 << " QR";
		}
		return 0;
	}
	if (no_of_people >= 50 && category == "normal")
	{
		budget = budget - (budget / 100) * 25;
		if (budget > ticket_fair_normal)
		{
			cout << "Yes! You have " << (budget - no_of_people * 249) << " QR";
		}
		else
		{
			cout << "Not enough money! You need " << no_of_people * 249 << " QR";
		}
		return 0;
	}
return 0;
}
