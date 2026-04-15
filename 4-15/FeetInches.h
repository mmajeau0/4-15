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

	void setInches(int inches);
	void setFeet(int feet);

	friend ostream & operator <<(ostream& stream, const FeetInches& feetInches);
	
	
	// friend ifstream & operator >>(ifstream& stream, const FeetInches& feetInches);

};

