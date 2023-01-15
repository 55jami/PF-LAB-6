#include<iostream>
using namespace std;
float total_income(int rows, int columns,string tic);
int main()
{
	string tic;
	int rows;
	int columns;
	float v;
	cout << "Enter the ticket type:";
	cin >> tic;
	cout << "Enter the number of rows:";
	cin >> rows;
	cout << "Enter the number of columns:";
	cin >> columns;
	v = total_income(rows, columns, tic);
	cout << "price is:" << v;

}
float total_income(int rows, int columns,string tic)
{
	float prem = 12;
	float norm = 7.5;
	float disc = 5;
	float result;
	if(tic == "normal")
	{
		result = rows * columns * norm;
		return result;
	}
	if(tic == "premiere")
	{
		result = rows * columns * prem;
		return result;
	}
	if(tic == "discount")
	{
		result = rows * columns * disc;
		return result;
	}
return 0;
}