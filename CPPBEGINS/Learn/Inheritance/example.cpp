#include <iostream>
using namespace std;
#include <string>

class thermoStat {
    private:
    int targetTemperature;

    public:
    thermoStat(int initialTemp){
        targetTemperature = initialTemp;
    }

    int getTemperature() const{
        return targetTemperature;
    }

    void setTemperature(int newTemp) {
        if (newTemp >= 50 && newTemp <= 90)
        {
            targetTemperature = newTemp;
            cout << "Temperature set to " << targetTemperature << "F \n";
        } else {
            cout << newTemp << "is outside of safe operating limit";
        }
        
    }
};

int main() {
    thermoStat livingRoom(70);

    cout << livingRoom.getTemperature() << "F \n";

    livingRoom.setTemperature(75);

    livingRoom.setTemperature(115);
}