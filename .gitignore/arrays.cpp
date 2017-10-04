#include <iostream>
using namespace std;

int find(int valueToSearchFor, int intArray[], int numberOfValidEnties);

int main() {
	char key;
	int table[10];
	int total = 0, input = 0, sum = 0;
	int search = 0, less = 0, equal = 0, greater = 0;
	int valueToSearchFor;
	double average = 0;

	cout << "Please enter a number; -1 will end loop." << endl;
	cin >> input;

	while (input >= 0) {
		table[total] = input;
		sum += table[total];
		total++;
		cout << "Please enter atleast 4 more variable; enter -1 to end." << endl;
		cin >> input;
	}


	cout << "These are the numbers you entered in: " << endl;
	for (int i = 0; i < total; i++) {
		cout << table[i] << " ";
	}
	cout << endl;
	cout << "The number of scores you entered is: " << total << endl;

	average = static_cast<double>(sum) / total;

	cout << "The Average of the numbers you entered is: " << average << endl;

	for (int i = 0; i < total; i++) {
		if (table[i] < average) {
			less++;
		}
		else if (table[i] == average) {
			equal++;
		}
		else {
			greater++;
		}
	}
	cout << "Number of inputs less then average: " << less << endl;
	cout << "Number of inputs equal to average: " << equal << endl;
	cout << "Number of input greater then average: " << greater << endl;

	do {
		cout << "What value would you like to search for?" << endl;
		cin >> valueToSearchFor;
		search = find(valueToSearchFor, table, total);

		if (search != -1)
			cout << "Found at index: " << search << endl;
		else
			cout << "Not found." << endl;

		cout << "Would you like to search again? (y/n)" << endl;
		cin >> key;
	} while (key != 'n');

	system("pause");
	return 0;
}

int find(int valueToSearchFor, int intArray[], int numberOfVallidEntries) {

	for (int i = 0; i < numberOfVallidEntries; i++) {
		if (intArray[i] == valueToSearchFor)
			return i;
	}
	return -1;
}
