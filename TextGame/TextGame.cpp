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
	int choice;

	cout << "Text Game Start!" << endl;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "You are driving down a country road at dusk. Trees of many colors zip by each side of the narrow road, red, orange, yellow, and a little green.\n";
	cout << "The air is cold and saturated with mist.\n";
	cout << "Your mind wanders, and just when you glance away...\n"; 
	cout << "...a dark silhouette appears suddenly on the road!\n";
	cout << "\n";
	cout << "Do something...\n";
	cout << "1: Keep driving!\n";
	cout << "2: Swerve!\n";
	cout << "3: Hit the brakes!\n";

	cout << "Make a choice, 1, 2, or 3:\n";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You hit the silhouette, breaking your windshield and causing you to lose control!\n";
		break;
	case 2:
		cout << "You swerve into the on coming lane just as a truck comes around a turn; you collide head on.\n";
		cout << "You die instantly.\n";
		break;
	case 3:
		cout << "You hit the breaks, the car screeches, the windshield cracks with a thump, and the world behind it spins and tumbles.\n";
		cout << "You black out.\n";
		break;
	default: 
		cout << "You didn't make a choice.";
	}
	cin >> choice;
    return 0;
}

