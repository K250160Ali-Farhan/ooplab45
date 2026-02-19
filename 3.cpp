#include <iostream>
using namespace std;

class Bank
{
    static float interestRate;

public:
    static void changeRate(float newRate)
    {
        interestRate = newRate;
    }

    void showRate() const
    {
        cout << "\nCurrent interest rate: " << interestRate << "%";
    }
};

// Initialize static member
float Bank::interestRate = 3.5;

int main()
{
    Bank b1;
    b1.showRate();

    Bank::changeRate(5.5);
    b1.showRate();
}
