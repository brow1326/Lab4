
#include <iostream>
#include "ElectricVehicle.h"
using namespace std;




ElectricVehicle::ElectricVehicle() {

}

ElectricVehicle::ElectricVehicle(float x, float y) {
    maximumCharge = x;
    engineEfficiency = y;
}




float ElectricVehicle::calculateRange(){
    return (currentCharge * 100) / engineEfficiency;
}
float ElectricVehicle::percentEnergyRemaining(){
    return (currentCharge / maximumCharge) *100.0f;
}
void ElectricVehicle::drive(float km){
    currentCharge -= (km/100) * engineEfficiency;

    if(currentCharge <= 0){
        cout << "Your car is out of energy!" << endl;
    }
}




ElectricVehicle::~ElectricVehicle(){
    cout << "In ElectricVehicle destructor" << endl;
}









