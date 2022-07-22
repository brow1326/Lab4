
#include <iostream>
#include "HybridVehicle.h"
using namespace std;




HybridVehicle::HybridVehicle(){

}

HybridVehicle::HybridVehicle(float x, float y, float z, float w) {

    maximumGasoline = x;
    gasolineEfficiency = y;
    maximumCharge = z;
    electricEfficiency = w;

}




float HybridVehicle::calculateRange(){
    return ( (currentCharge * 100) / electricEfficiency ) + ( (currentGasoline * 100) / gasolineEfficiency);
}
float HybridVehicle::percentEnergyRemaining(){
    return ( ((currentCharge / maximumCharge) * 100.0f) + ((currentGasoline / maximumGasoline) * 100.0f) ) / 2;
}
void HybridVehicle::drive(float km){

    if(currentCharge > 0){
        currentCharge -= (km/100) * electricEfficiency;
    } else {
        currentGasoline -= (km/100) * gasolineEfficiency;
    }

    if(currentGasoline <= 0){
        cout << "Your car is out of energy!" << endl;
    }
    
}




HybridVehicle::~HybridVehicle(){
    cout << "In HybridVehicle destructor" << endl;
}