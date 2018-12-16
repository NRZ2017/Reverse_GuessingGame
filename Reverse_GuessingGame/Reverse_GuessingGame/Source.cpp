#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void toLower(std::string& data)
{
	std::transform(data.begin(), data.end(), data.begin(), ::tolower);
}

int main()
{
	while (true)
	{
		srand(time(NULL));

		int randomNum = rand() % 100 + 1;
		string answer = "";
		string answer2 = "";
		int Max = 100;
		int min = 0;
		int count = 0;
		cout << "Please think of a number between 1 and 100. I will try to guess what it is. ";
		while (true)
		{
			cout << "Is it " << randomNum << "?" << endl;
			std::getline(cin, answer);


			toLower(answer);
			if (answer == "too high")
			{
				Max = randomNum;
				randomNum = rand() % (Max - min) + min;
				count++;
			}
			if (answer == "too low")
			{
				min = randomNum;
				randomNum = rand() % (Max - min) + min;
				count++;
			}
			if (answer == "correct")
			{
				cout << "Yay! It took me " << count << " tries to get it." << endl;
				break;
			}
		}
		cout << "Do you want to play again?" << endl;
		cin >> answer2;
		toLower(answer2);
		if (answer2 == "no")
		{
			break;
		}
	}
}
