#include <iostream>
using namespace std;
string title(string gender, int age);
int main()
{
string g;
string ge;
int age;
cout << "Enter age is:";
cin >> age;
cout << "Enter gender is:";
cin >> g;
ge = title(g,age);
cout << "Gender is:" << ge;

}
string title(string gender, int age)
{
	string gdr;
	if (gender == "male" && age > 16)
	{
		gdr = "Mr";
		return gdr;
	}
	else if (gender == "boy" && age < 16)
	{
		gdr = "Master";
		return gdr;
	}
	else if (gender == "woman" && age > 16)
	{
		gdr = "Mrs";
		return gdr;
	}
	else if (gender == "girl" && age < 16)
	{
		gdr ="Miss";
		return gdr;
	}
	else {
		return gdr;
	}
}