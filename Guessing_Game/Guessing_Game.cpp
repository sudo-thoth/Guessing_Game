// Guessing_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <random>
using namespace std;




int main()
{
	random_device rd;
	uniform_int_distribution<int> rdGuess(0, 100);
	int x = rdGuess (rd); 
	int y = 10;

	
	while (x!=y)
	{
		cout << "Guess A Number" << endl;
		cin >> y;

		if (y > x) {
			cout << "Too High of A Guess" << endl;
		}
		else if (y < x) {
			cout << "Too Low of A Guess" << endl;
		}
		else{
			cout << "Congrats You Have Won!!" << endl;
		}


	}
    return 0;
}

