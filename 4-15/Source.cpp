//#9876
#include "FeetInches.h"



int main()
{
	FeetInches num1{0, 0};
	FeetInches num2{0,0}; 


	cout << "Enter first distance (feet inches) :"; 
	cin >> num1; 

	cout << "Enter second distance (feet inches) :";
	cin >> num2;



	int choice{}; 
	do {
		cout << "===== FeetInches Menu ======\n"
			<< "1. Add distances (+)\n"
			<< "2. Subtract distances (-)\n"
			<< "3. Compare distances (>, <, ==)\n"
			<< "4. increment first distance (++first)\n"
			<< "5. increment second distance (second++)\n"
			<< "6. display disances\n"
			<< "0. exit\n";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Sum: " << num1 + num2 << endl;
			break;
		case 2:
			cout << "Difference: " << num1 - num2 << endl;
			break;
		case 3:
			cout << "First < Second :";
			if (num1 < num2)
				cout << "True";
			else
				cout << "False";
			cout << "First > Second :";
			if (num1 > num2)
				cout << "True";
			else
				cout << "False";
			cout << "First == Second: ";
			if (num1 == num2)
				cout << "True";
			else
				cout << "False";
			break;
		case 4:
			cout << "After Prefix ++" << ++num1 << endl;
			break;
		case 5:
			cout << "After Postfix ++" << ++num2 << endl;
			break;
		case 6:
			cout << "First : " << num1;
			cout << "\nSecond: " << num2;
			break;
		default:
			cout << "Not an option try again: ";
			cin >> choice;

		}
	} while (choice != 0);



	return 0; 
}

