// Sif Tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int points_tracker;
	double refill, result, sif_tracker;
	int livepts, loveca, stamina;
	std::cout << "Your Points Right Now ";
	std::cin >> livepts;
	std::cout << "Loveca You Want to Use ? ";
	std::cin >> loveca;
	std::cout << "Your Max Stamina ";
	std::cin >> stamina;

	//25 Stamina = 1500 Pts
	refill = loveca * stamina;
	result = refill / 25 * 1500;
	sif_tracker = livepts + result;

	std::cout << "Your Final Score is " << sif_tracker << " Wtih Consuming " << loveca << " Loveca's\n";

	system("pause");
		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
