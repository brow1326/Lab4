
#include <iostream>
#include "GasolineVehicle.h"
using namespace std;




GasolineVehicle::GasolineVehicle() {

}

GasolineVehicle::GasolineVehicle(float x, float y) {
    maximumGasoline = x;
    engineEfficiency = y;
}




float GasolineVehicle::calculateRange(){
    return (currentGasoline * 100) / engineEfficiency;
}
float GasolineVehicle::percentEnergyRemaining(){
    return (currentGasoline / maximumGasoline) *100.0f;
}
void GasolineVehicle::drive(float km){
    currentGasoline -= (km/100) * engineEfficiency;
    if(currentGasoline <= 0){
        cout << "Your car is out of energy!" << endl;
    }
}




GasolineVehicle::~GasolineVehicle(){
    cout << "In GasolineVehicle destructor" << endl;
}
