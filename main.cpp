#include <iostream>
#include <conio.h>

int main()
{
	const int min = 60;
	const int h = min * 60;
	const int day = h * 24;
	const int month = day * 31; //default month = 31 days
	
	int age;
	int birth;
	int age_in_seconds = 0;

	std::cout << "Enter the age: " << std::endl;
	std::cin >> age;
	std::cout << "Enter the year of birth: " << std::endl;
	std::cin >> birth;

	for (int i = 0; i < age; i++, birth++)
	{
		if ((birth % 4 == 0 && birth % 100 != 0) || birth % 400 == 0) //condition to check if the year is leap year 
		{
			age_in_seconds += (7 * month) + ((4 * month) - (4 * day)) + (day * 29); //7 * 31 days, 4 * 30 days, 1 * 29 days
		}
		else
		{
			age_in_seconds += (7 * month) + ((4 * month) - (4 * day)) + (day * 28); //as above, but with 28 days
		}
	}

	std::cout << "Your age in seconds: " << age_in_seconds << std::endl;


	getch();

	return 0;
}