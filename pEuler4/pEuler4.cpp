// This program solves Project Euler problem 4: Largest Palindrome Product

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string reverseString(string s)
{
	string temp;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		temp.push_back(s[i]);
	}
	return temp;
}

bool isPalindrome(int p)
{
	string str = to_string(p);
	string rev = reverseString(str);
	if (str == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int largestPalindrome = 0;
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int ij = i * j;
			if ((isPalindrome(ij)) && (ij > largestPalindrome))
			{
				largestPalindrome = ij;
			}
		}
	}
	cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome;
}

