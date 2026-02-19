#include <iostream>
using namespace std;

class Engine
{
    double horsepower;

public:
    void setPower()
    {
        cout << "Enter engine power (HP): ";
        cin >> horsepower;
    }

    double getPower() const { return horsepower; }
};

class Car
{
    Engine engine;
    string model;

public:
    void setCar()
    {
        engine.setPower();
        cout << "\nEnter car model: ";
        cin >> model;
    }

    void display() const
    {
        cout << "\nEngine Power: " << engine.getPower() << " HP"
             << "\nCar Model   : " << model << endl;
    }
};

int main()
{
    Car myCar;
    myCar.setCar();
    myCar.display();
}
