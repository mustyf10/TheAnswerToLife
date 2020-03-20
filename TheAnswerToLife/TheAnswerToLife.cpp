// TheAnswerToLife.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	while (n != 42)
	{
		cout << "Enter an integer to find the meaning of life: ";
		cin >> n;
	}
	cout << "Well done, you have found the meaning of life.";

	return 0;

}