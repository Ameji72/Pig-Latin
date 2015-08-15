// Pig Latin.cpp : Defines the entry point for the console application.
// This is the main source file (Source = .cpp) that the compiler will run. 
// This is decided by the source file with the main() function.

#include "stdafx.h" // A header file that saves space in the file. 
// Read stdafx.h for more information.

int main() // The main function, the first thing the compiler will run.
{
	/* Simple command to print something out. */ cout << "String: " << flush; // Flush controls buffer, which stops the printing of a huge array.
	string pigLatin; // Defining the string
	getline(cin, pigLatin); // Storing the user's input

	pigLatin += '-'; // Adding "-'first letter'ay"
	pigLatin += pigLatin[0];
	pigLatin += "ay";

	for (int i = 1; pigLatin[i] != 0; i++) // For loop to print out the values of the string's char array.
	{
		cout << pigLatin[i];
	}

	cout << endl;
	system("PAUSE"); 
}

