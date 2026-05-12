#include <iostream>
using namespace std;

int main() {
int n;
double sum = 0.0;
double number;

cout << "Enter the number of inputs: ";
cin >> n;

	if (n<=0) { 
		cout << "Please enter a number greater than zero." << endl;
		return 1;
	}
   	for (int i = 1; i <= n; i++) {
        	cout << "Enter number " << i << ": ";
       		cin >> number;
        	sum += number; 
   	}

	double average = sum/n;
	cout << "Average is : " << average  << endl;
	
	return 0;
}
