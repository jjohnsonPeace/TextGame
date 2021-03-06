// TextGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	string name;

	cout << "Text Game Start!" << endl;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "You are driving down a country road at dusk. Trees of many colors zip by each side of the narrow road, red, orange, yellow, and a little green.\n";
	cout << "The air is cold and saturated with mist.\n";
	cout << "Your mind wanders, and just when you glance away...\n"; 
	cout << "...a dark silhouette appears suddenly on the road!\n";
	cout << "The car screeches and swerves, the windshield cracks with a thump, and the world behind it spins and tumbles.\n";
	cout << "You black out.\n";
    return 0;
}

