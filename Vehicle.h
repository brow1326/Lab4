#pragma once
#include <iostream>

using namespace std;

class Vehicle {

protected:

    float engineEfficiency;

public:

    Vehicle();

	
	virtual float calculateRange()=0;
    virtual float percentEnergyRemaining()=0;
    virtual void drive(float km){}

	virtual ~Vehicle()
    {
        cout << "In Vehicle destructor" << endl;
    }
};