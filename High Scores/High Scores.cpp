// High Scores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Demonstrates algorithms

//We add the required dependencies
#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	//We create a constant iterator that will work with integer type vectors.
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores. ";
	//We create a vector with an integer data type named scores.
	vector<int> scores;
	//We push three numbers to the back of the scores vector.
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Scores:\n";

	//We create a for loop that iterates through the entire vector
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		//for each item in the vector, we push it to the console.
		cout << *iter << endl;
	}
}
