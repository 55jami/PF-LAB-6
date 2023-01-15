#include<iostream>
using namespace std;
char calculateGrade(int marks);
int main()
{
	int marks;
	cout << "Enter the marks:";
	cin >> marks;
	char result;
	result = calculateGrade(marks);
	cout << "Grade is:" << result;
}
char calculateGrade(int marks)
{
	char grade;
	if (marks < 50)
	{
		grade = 'F';
		return grade;
	}
	else if (marks >= 50 && marks <= 60)
	{
		grade = 'E';
		return grade;
	}
	else if (marks >= 61 && marks <= 70)
	{
		grade = 'D';
		return grade;
	}
	else if (marks >= 71 && marks <= 80)
	{
		grade = 'C';
		return grade;
	}
	else if (marks >= 81 && marks <= 85)
	{
		grade = 'B';
		return grade;
	}
	else
	{
		grade = 'A';
		return grade;
	}
}