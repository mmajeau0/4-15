//#9876

// https://github.com/mmajeau0/4-15.git
#include "FeetInches.h"



int main()
{
	FeetInches num1{0, 0};
	FeetInches num2{0,0}; 
	int feet{}; 
	int inch{}; 

	cout << "Enter first distance (feet inches) :"; 
	cin >> feet; 
	cin >> inch; 
	num1.setFeet(feet);
	num1.setInches(inch);


	cout << "Enter second distance (feet inches) :";
	cin >> feet;
	cin >> inch;
	num2.setFeet(feet);
	num2.setInches(inch);



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



//=======output=======
//Enter first distance(feet inches) :2
//1
//Enter second distance(feet inches) : 21 1
//==== = FeetInches Menu ======
//1. Add distances(+)
//2. Subtract distances(-)
//3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	1
//	Sum: 21 feet 2 inches
//	==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	2
//	Difference: 21 feet - 19 inches
//	==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	3
//	First < Second :TrueFirst > Second :FalseFirst == Second : False==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	4
//	After Prefix++2 feet 2 inches
//	==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	5
//	After Postfix++21 feet 2 inches
//	==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	6
//	First : 2 feet 1 inches
//	Second : 21 feet 1 inches==== = FeetInches Menu ======
//	1. Add distances(+)
//	2. Subtract distances(-)
//	3. Compare distances(> , < , == )
//	4. increment first distance(++first)
//	5. increment second distance(second++)
//	6. display disances
//	0. exit
//	0
//	Not an option try again: 0