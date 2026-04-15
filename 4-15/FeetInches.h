#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

class FeetInches
{
private: 
	int feet; 
	int inches; 

public: 
	FeetInches(int feet, int inches); 
	~FeetInches(); 

	FeetInches operator +(FeetInches &num); 
	FeetInches operator -(FeetInches &num);
	FeetInches operator ++();
	FeetInches operator --();
	bool operator >(FeetInches &num);
	bool operator <(FeetInches &num);
	bool operator ==(FeetInches &num);


	friend ostream & operator <<(ostream& stream, const FeetInches& feetInches);
	
	
	friend ostream & operator >>(ostream& stream, const FeetInches& feetInches);

};

