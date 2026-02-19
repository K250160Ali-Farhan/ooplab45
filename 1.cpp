#include <iostream>
using namespace std;

class Car
{
    int currentSpeed;

public:
    void setSpeed(int s)
    {
        this->currentSpeed = s;
    }

    void showSpeed() const
    {
        cout << "\nCurrent speed: " << currentSpeed;
    }
};

int main()
{
    Car myCar;
    myCar.setSpeed(20);
    myCar.showSpeed();
}
