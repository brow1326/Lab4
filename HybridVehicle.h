
#pragma once
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"

class HybridVehicle : public ElectricVehicle, public GasolineVehicle {

    protected:
        float gasolineEfficiency;
        float electricEfficiency;


    public:
        HybridVehicle();
        HybridVehicle(float x, float y, float z, float w);
        virtual float calculateRange();
        virtual float percentEnergyRemaining();
        virtual void drive(float km);

        virtual ~HybridVehicle();

};