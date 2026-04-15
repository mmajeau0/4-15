#include "FeetInches.h"

FeetInches:: ~FeetInches() {} 


FeetInches::FeetInches(int feet, int inches)
{
	if (inches > 12)
	{
		feet = feet + inches / 12;
		inches = inches % 12;
	}
	this->feet = feet;
	this->inches = inches; 
}

FeetInches FeetInches::operator +(FeetInches &num)
{
	FeetInches additionSum(0, 0); 

	additionSum.inches = this->inches + num.inches;
    // inchSum is the sum of inches + the inches of a different FeetInches class. 	

	if (additionSum.inches > 12)
	{
		additionSum.feet += additionSum.inches / 12;
		additionSum.inches = additionSum.inches % 12; 
	}

	additionSum.feet = additionSum.feet + num.feet; 

	return additionSum; 
}


FeetInches FeetInches::operator -(FeetInches &num)
{
	FeetInches subtractionSum(0,0);

	subtractionSum.inches = this->feet - num.feet;

	if (subtractionSum.inches > 12)
	{
		subtractionSum.feet += subtractionSum.inches / 12;
		subtractionSum.feet += subtractionSum.inches % 12; 
	}

	subtractionSum.feet = subtractionSum.feet + num.feet;

	return subtractionSum; 
}

FeetInches FeetInches::operator ++()
{
    FeetInches additionSum(0, 0);

    additionSum.inches = this->inches + 1;

    if (additionSum.inches > 12)
    {
        additionSum.feet += additionSum.inches / 12;
        additionSum.inches = additionSum.inches % 12;
    }

	additionSum.feet = this->feet + additionSum.feet; 

    return additionSum;
}
FeetInches FeetInches::operator --()
{
    FeetInches subtractionSum(0, 0);

    subtractionSum.inches = this->inches - 1;	

    if (subtractionSum.inches > 12)
    {
        subtractionSum.feet += subtractionSum.inches / 12;
        subtractionSum.inches = subtractionSum.inches % 12;
    }

    subtractionSum.feet = this->feet + subtractionSum.feet;

    return subtractionSum;
}
bool FeetInches::operator >(FeetInches &num)
{
	if (this->feet > num.feet)
	{
		return true;
	}
	else if (this->feet < num.feet)
	{
		return false; 
	}
	else if (this->inches > num.inches)
	{
		return true;
	}
	else 
	{
		return false; 
	}

}

bool FeetInches::operator <(FeetInches &num)
{
    if (this->feet < num.feet)
    {
        return true;
    }
    else if (this->feet > num.feet)
    {
        return false;
    }
    else if (this->inches < num.inches)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool FeetInches::operator ==(FeetInches &num)
{
	if (this->inches == num.inches && this->feet == num.feet)
	{
		return true; 
	}
	return false;
}

ostream &operator <<(ostream & stream, const FeetInches & feetInches)
{
    stream << feetInches.feet << " feet " << feetInches.inches << " inches";
	return stream; 
}

// ifstream &operator >>(ifstream& stream, const FeetInches& feetInches)
// {
// 	ifstream >> feetInches.feet; 
// 	stream >> feetInches.inches; 
// 	return stream; 
// }

void FeetInches::setInches(int inches)
{
	this->inches = inches;
}

void FeetInches::setFeet(int feet)
{
	this->feet = feet; 
}