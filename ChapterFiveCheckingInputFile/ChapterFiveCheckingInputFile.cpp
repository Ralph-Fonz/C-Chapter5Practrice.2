// ChapterFiveCheckingInputFile.cpp : Defines the entry point for the console application.
// This program test for file open error

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;
	int number;

	// Open the file
	inputFile.open("BadListOfNumbers.txt");

	// If the file successfully opened, proccess it
	if (inputFile)
	{
		// Read the numbers from the file and display then
		while (inputFile >> number)
		{
			cout << number << endl;
		}
	
		// Close the file
		inputFile.close();
	}
	else
	{
		// Display an error message
		cout << "Error opening the file. \n";
	}
    return 0;
}

