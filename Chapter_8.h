#pragma once

#include <iostream>
#include <algorithm>
#include <deque>

void problemOne()
{
	/*
	1. Write a program in which you declare a deque to store values of
	type double, read in ten double numbers, and store them in the deque.
	Then call the generic sort function to sort the numbers in
	the deque and display the results.
	*/

	std::deque<double> in;

	for (int i = 0; i < 10; i++)
	{
		double temp;
		std::cout << "Enter A Double Value: ";
		std::cin >> temp;
		in.push_back(temp);
		std::sort(in.begin(), in.end());
	}

	for (auto &i : in)
	{
		std::cout << i << ' ';
	}
}