#include <iostream>
using namespace std;

class Weapon
{
private:
    string weaponName;
    int damage;

public:
    void setWeapon()
    {
        cout << "Enter Weapon Name: ";
        getline(cin, weaponName);

        cout << "Enter Damage: ";
        cin >> damage;
        cin.ignore();
    }

    void showWeapon() const
    {
        cout << "Weapon: " << weaponName << endl;
        cout << "Damage: " << damage << endl;
    }
};

class Player
{
private:
    string playerName;
    int health;
    Weapon weapon;
    static int activePlayers;

public:
    Player()
    {
        activePlayers++;
    }

    ~Player()
    {
        activePlayers--;
    }

    void setPlayer()
    {
        cout << "\nEnter Player Name: ";
        getline(cin, playerName);

        cout << "Enter Health: ";
        cin >> health;
        cin.ignore();

        weapon.setWeapon();
    }

    void showStatus() const
    {
        cout << "\nPlayer: " << playerName << endl;
        cout << "Health: " << health << endl;
        weapon.showWeapon();
        cout << "Active Players: " << activePlayers << endl;
    }

    static void showActivePlayers()
    {
        cout << "\nTotal Active Players: " << activePlayers << endl;
    }
};

int Player::activePlayers = 0;

int main()
{
    {
        Player players[3];

        for (int i = 0; i < 3; i++)
            players[i].setPlayer();

        for (int i = 0; i < 3; i++)
            players[i].showStatus();

        Player::showActivePlayers();
    }

    cout << "\nAfter block ends:" << endl;
    Player::showActivePlayers();

    return 0;
}
