#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::stoi;
using std::reverse;
using std::to_string;

// Test if indicated string is a palindrome
bool is_palindrome(const string& value)
{
	int minimum = 0;
	int maximum = value.length() - 1;

	while (true)
	{
		if (minimum > maximum)
		{
			return true;
		}
		
		char left_side_character = value[minimum];
		char right_side_character = value[maximum];
		if (tolower(left_side_character) != tolower(right_side_character))
		{
			return false;
		}
		minimum++;
		maximum--;
	}
}

int main(int argc, char *argv[])
{
	string input_file;

	// Check first argument if it exists for input file, otherwise ask user
	if (argc > 1)
	{
		input_file = argv[1];
	}
	else
	{
		cout << "Please enter the path to your input file: " << endl;
		cin >> input_file;
	}

	// Open input file and check if successfully opened
	ifstream ifs(input_file);
	if (!ifs)
	{
		cout << "Failed to open input file." << endl;
		return 1;
	}

	string line;
	while (getline(ifs, line))
	{
		unsigned int number_of_iterations = 0; 

		// If the length is one by default it's a palindrome
		if (line.length() == 1)
		{
			cout << number_of_iterations << " " << line << endl;
			continue;
		}

		while (!is_palindrome(line))
		{
			int original_number = stoi(line); // Convert line to an int
			reverse(line.begin(), line.end()); // Reverse the order of line
			int reversed_number = stoi(line); 
			int new_number = original_number + reversed_number; 
			line = to_string(new_number); 
			number_of_iterations++;
		}
		cout << number_of_iterations << " " << line << endl;
	}

	return 0;
}