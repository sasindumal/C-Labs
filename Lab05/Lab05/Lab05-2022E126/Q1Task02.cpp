// MALHARA R.M.Y.S
// 2022/E/126
// EC2010
//Group: C
// Lab: 05
// Program Description: Q1 Task02
// Certificate of Authenticity:
// I certify that the code in the method function main of this project
// is entirely my own work.


#include <iostream>
using namespace std;

class WaterTank {
private:
    double capacity;
    double currentWaterLevel;

public:
    void initialize(double tankHeight, double tankRadius) {
        capacity = ((22* tankRadius * tankRadius * tankHeight)/7)*1000;
    }

    double getCapacity() {
        return capacity;

    }

    void setWaterlevel (double currentWaterLevel){
        this->currentWaterLevel=currentWaterLevel;
    }

    double fill(double fillAmount) {
         if (currentWaterLevel + fillAmount <= capacity) {
            currentWaterLevel+= fillAmount;
         } else {
            cout << "Tank can't be overfilled." << endl;
         }
         return currentWaterLevel;
    }

    double drain(double drainAmount) {
        if (currentWaterLevel >= drainAmount) {
            currentWaterLevel -= drainAmount;
        } else {
            cout << "Not enough water to drain." << endl;
        }
        return currentWaterLevel;
    }

    double getCurrentWaterLevel() {
        return currentWaterLevel;
    }

};

int main(){
    WaterTank tank;
    double tankHeight, tankRadius, currentWaterLevel;
    cout << "Enter the height (in meter) of the water tank: ";
    cin >> tankHeight;
    cout << "Enter the radius (in meter) of the water tank: ";
    cin >> tankRadius;
    tank.initialize(tankHeight, tankRadius);
    cout << "Tank capacity: " << tank.getCapacity() << "liters." << endl;
    cout << "Enter the current water level (in liters): ";
    cin >> currentWaterLevel;
    tank.setWaterlevel(currentWaterLevel);
    double fillAmount;
    cout << "Enter the amount to fill (in liters): ";
    cin >>fillAmount;
    tank.fill(fillAmount);
    cout << "Current water level: " << tank.getCurrentWaterLevel() << "liters." << endl;
    double drainAmount;
    cout << "Enter the amount to drain(in liters): ";
    cin >> drainAmount;
    tank.drain(drainAmount);
    cout << "Current water level: " << tank.getCurrentWaterLevel () << "liters." << endl;
return 0;
}



