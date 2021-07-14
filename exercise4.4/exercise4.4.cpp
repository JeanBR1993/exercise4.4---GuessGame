#include "std_lib_facilities.h"

int main()
{
	char answer;

	int max = 101;
	int min = 1;


	cout << "This is the guess game, please think of an integer number between 1 and 100 and answer the questions with y/n or '=' if it`s equal.\n";
	cout << "Is your number less than " << (max + min) / 2 << " ?\n";

	while (cin >> answer)
	{
		if (answer != 'y' && answer != 'n' && answer != '=')
		{
			cout << "Invalid answer\n";
			return 1;
		}

		if (answer == 'y')
		{
			max = (max + min) / 2;
			cout << "Is your number less than " << (max + min) / 2 << " ?\n";
		}
		else if (answer == 'n')
		{
			min = (max + min) / 2;
			cout << "Is your number less than " << (max + min) / 2 << " ?\n";
		}
		else
		{
			cout << "Your number is " << (max + min) / 2 << ".\n";
			keep_window_open();
			return 0;
		}

	}

}