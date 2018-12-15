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
	srand(time(NULL));

	int randomNum = rand() % 100 + 1;
	int prevRand = 0;
	string answer = "";

	while (true)
	{
		cout << "Please think of a number between 1 and 100. I will try to guess what it is. Is it " << randomNum << "?" << endl;
		cin >> answer;
		prevRand = randomNum;
		toLower(answer);
		if (answer == "too high")
		{
			randomNum = rand() % 1 + prevRand;
		}
	}



	system("PAUSE");
}