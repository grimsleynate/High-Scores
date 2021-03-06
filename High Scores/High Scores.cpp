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

	cout << "\nFinding a score.";
	//we create an integer variable to store the user's input.
	int score = 0;
	cout << "\nEnter a score to find: ";
	//we store the user's input in a previously created variable.
	cin >> score;
	//we are using the find algorithm to search the vector
	iter = find(scores.begin(), scores.end(), score);
	//we check to see if the user's input was found in the vector before the end.
	if (iter != scores.end())
	{
		//if it was, let the user know.
		cout << "Score found.\n";
	}
	else
	{
		//if it wasn't found, let the user know.
		cout << "Score not found.\n";
	}

	//now we use an algorithm to randomize the scores
	cout << "\nRandomizing scores.";
	//we seed the random number generator
	srand(static_cast<unsigned int>(time(0)));
	//we are using the random shuffle algorithm to randomize the vector
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	//we run through the vector with a for loop
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	//we use the sort algorithm to sort the scores vector
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores: \n";
	//we run through the scores vector and print each item
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
