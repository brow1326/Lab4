

#pragma once
#include "Vehicle.h"

class GasolineVehicle : public Vehicle {

protected:
	float currentGasoline;
	float maximumGasoline;

public:
    GasolineVehicle();
    GasolineVehicle(float x, float y);
    virtual float calculateRange();
    virtual float percentEnergyRemaining();
    virtual void drive(float km);

    virtual ~GasolineVehicle();
    
};