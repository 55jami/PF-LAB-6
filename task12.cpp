#include<iostream>
using namespace std;
int main()
{
	double num_of_km, taxi_price, bus_price,train_price;
	string period;
	cout << "Enter the no. of Kilometrs you Want to travel__ ";
	cin >> num_of_km;
	cout << "Enter period of time(day or night)__";
	cin >> period;
	
	if (num_of_km < 20)
	{	
		if (period == "day")
		{
			taxi_price = 0.79 * num_of_km;
		}
		else if (period == "night")
		{
			taxi_price = 0.90 * num_of_km;
		}
		cout << "Price of transport is= " << taxi_price << " EUR" << endl;

	}
	else if (num_of_km >= 20 && num_of_km < 100)
	{
		bus_price = 0.09 * num_of_km;
		if (period == "day")
		{
			taxi_price = 0.79 * num_of_km;
		}
		else if (period == "night")
		{
			taxi_price = 0.90 * num_of_km;
		}
		if(taxi_price<bus_price)
		{
			cout << "Cheapest tranport is of TAXI with price of= " << taxi_price << " EUR";
		}
		  else if (taxi_price > bus_price)
		{
			cout << "Cheapest tranport is of BUS with price of= " << bus_price << " EUR";
		}
	}
	else if (num_of_km >=100)
	{
		train_price = 0.06 * num_of_km;
		bus_price = 0.09 * num_of_km;
		if (period == "day")
		{
			taxi_price = 0.79 * num_of_km;
		}
		else if (period == "night")
		{
			taxi_price = 0.90 * num_of_km;
		}
		if (taxi_price < bus_price && taxi_price<train_price)
		{
			cout << "Cheapest tranport is of TAXI with price of= " << taxi_price << " EUR";
		}
		else if (bus_price<taxi_price && bus_price<train_price)
		{
			cout << "Cheapest tranport is of BUS with price of= " << bus_price << " EUR";
		}
		else if (train_price<taxi_price && train_price<bus_price)
		{
			cout << "Cheapest tranport is of TRAIN with price of= " << train_price << " EUR";
		}
	}
	

}