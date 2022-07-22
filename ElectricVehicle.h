
#pragma once
#include "Vehicle.h"

class ElectricVehicle : public Vehicle {

protected:
	float currentCharge;
	float maximumCharge;

public:
    ElectricVehicle();
    ElectricVehicle(float x, float y);
    virtual float calculateRange();
    virtual float percentEnergyRemaining();
    virtual void drive(float km);

    virtual ~ElectricVehicle();



};