#include <iostream>
using namespace std;

int main()
{
	/* George Dawson
	   georgedawson2@my.unt.edu
	   This is a program designed to take the input of standard
	   foot measurements of walls of a house based on a provided
	   model, and use that input to find the volume and air tonnage
	   of that house.
	*/

	// Declare variables
	double wall_a, wall_b, wall_c, wall_d, wall_e, wall_f, wall_g, wall_h, height, air_volume;
	int air_tonnage;

	// Prompt user for variable inputs and record them
	cout << "Please type in the length of the following walls.\n";
	cout << "A: ";
	cin >> wall_a;
	cout << "C: ";
	cin >> wall_c;
	cout << "D: ";
	cin >> wall_d;
	cout << "F: ";
	cin >> wall_f;
	cout << "G: ";
	cin >> wall_g;
	cout << "H: ";
	cin >> wall_h;
	cout << "Now, what is the height of the building?\n";
	cin >> height;

	// This entire segment was done for my own amusement. I understand that we can assume that all input would be valid,
	// but I wanted to do more as a personal challenge
	// I'm sure there are probably better, faster, and more intuitive ways to check and correct these variables, but this
	// is the best I could figure for what I know about computer science so far
	// Preventing inoperable variables
	wall_b = (wall_h - wall_f) + wall_d;
	wall_e = (wall_a - wall_g) - wall_c;
	while ((wall_g > wall_a)||(wall_c > wall_a)||(wall_e > wall_a)||(wall_g + wall_c > wall_a)||(wall_g + wall_e > wall_a)||(wall_e + wall_c > wall_a)||(wall_g + wall_e + wall_c > wall_a)||(wall_g + wall_e + wall_c < wall_a)||(wall_f > wall_h)||(wall_d > wall_b))
	{
		if (wall_g > wall_a)
		{
			cout << "The value you entered for wall G is too large. Please enter a smaller value:\n" << "G: ";
			cin >> wall_g;
		}
		else if (wall_c > wall_a)
		{
			cout << "The value you entered for wall C is too large. Please enter a smaller value:\n" << "C: ";
			cin >> wall_c;
		}
		else if  (wall_e > wall_a)
		{
			cout << "The value you entered for wall E is too large. Please enter a smaller value:\n" << "C: ";
			cin >> wall_e;
		}
		else if (wall_g + wall_c > wall_a)
		{
			cout << "The values you entered for walls C and G are too large. Please enter smaller values:\n" << "C: ";
			cin >> wall_c;
			cout << "G: ";
			cin >> wall_g;
		}
		else if (wall_e + wall_g > wall_a)
		{
			cout << "The values you entered for walls E and G are too large. Please enter smaller values:\n" << "E: ";
			cin >> wall_e;
			cout << "G: ";
			cin >> wall_g;
		}
		else if (wall_c + wall_e > wall_a)
		{
			cout << "The values you entered for walls C and E are too large. Please enter smaller values:\n" << "C: ";
			cin >> wall_c;
			cout << "E: ";
			cin >> wall_e;
		}
		else if (wall_e + wall_g + wall_c > wall_a)
		{
			cout << "The value you entered for walls C, E, and G are too large. Please enter smaller values:\n" << "C: ";
			cin >> wall_c;
			cout << "E: ";
			cin >> wall_e;
			cout << "G: ";
			cin >> wall_g;
		}
		else if (wall_e + wall_g + wall_c < wall_a)
		{
			cout << "The value you entered for walls C, E, and G are too small. Please enter larger values:\n" << "C: ";
			cin >> wall_c;
			cout << "E: ";
			cin >> wall_e;
			cout << "G: ";
			cin >> wall_g;
		}
		else if (wall_f > wall_h)
		{
			cout << "The value you entered for wall F is too large. Please enter a smaller value:\n" << "F: ";
			cin >> wall_f;
		}
		else if (wall_d > wall_b)
		{
			cout << "The value you entered for wall D is too large. Please enter a smaller vallue:\n" << "D: ";
			cin >> wall_d;
		}
	};

	// Calculations
	air_volume = ((wall_a * (wall_h - wall_f)) + (wall_c * wall_d) + (wall_g * wall_f)) * height;
	air_tonnage = (air_volume / 100) + 0.9999999999;

	// Formatting outputs
	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision (2);

	// Printing outputs
	cout << "The volume of air in the house is " << air_volume << " cubic feet.\n";
	cout << "The proper tonnage for this house is a " << air_tonnage << " ton unit." << endl;

	return 0;
}
