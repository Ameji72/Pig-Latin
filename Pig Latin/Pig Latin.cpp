// Pig Latin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	cout << "String: " << flush;
	string pigLatin;
	getline(cin, pigLatin);

	pigLatin += '-';
	pigLatin += pigLatin[0];
	pigLatin += "ay";

	for (int i = 1; pigLatin[i] != 0; i++)
	{
		cout << pigLatin[i];
	}

	cout << endl;
	system("PAUSE");
}

