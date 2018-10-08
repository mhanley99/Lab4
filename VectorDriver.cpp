#include "VectorDriver.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	
	cout << endl << "Test my_vector" << endl;
	vector<short> my_vector(5);
	print(my_vector);
	cout << endl;

	cout << "fill my_vector" << endl;
	fill_vector(my_vector);
	print(my_vector);
	cout << endl;

	cout << "add ten numbers to my vector" << endl;
	add_numbers(my_vector);
	print(my_vector);
	cout << endl;

	cout << "add another ten numbers to my vector" << endl;
	add_numbers(my_vector);
	print(my_vector);
	cout << endl;

	cout << "print values in even elements of the vector" << endl;
	print_even(my_vector);
	cout << endl;

	cout << "test if 4 is in the vector" << endl;
	if (is_present(my_vector, 4) == true)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	cout << endl;

	cout << "test if 22 is in the vector" << endl;
	if (is_present(my_vector, 22) == true)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	cout << endl;

	vector<short> small_vector(5);
	small_vector = { 2, 5, 7, 1, 9 };
	cout << "print values of small_vector" << endl;
	print(small_vector);
	cout << endl;

	cout << "print sorted values of small_vector" << endl;
	std::sort(small_vector.begin(), small_vector.end());
	print(small_vector);
	cout << endl << endl;

	system("pause");
	return 0;
}
