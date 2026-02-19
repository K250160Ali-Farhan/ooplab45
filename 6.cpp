#include <iostream>
using namespace std;

class Player
{
private:
    string playerName;
    static int totalPlayers;

public:
    Player(const string& name)
    {
        playerName = name;
        totalPlayers++;
    }

    ~Player()
    {
        totalPlayers--;
    }

    static void showPlayers()
    {
        cout << "Total Players: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main()
{
    cout << "--- Initial Player Count ---" << endl;
    Player::showPlayers();

    {
        cout << "\n--- Creating Players p1, p2, p3 ---" << endl;
        Player p1("Ali");
        Player p2("Ahmed");
        Player p3("Sara");

        Player::showPlayers();
    }

    cout << "\n--- After Previous Players are Destroyed ---" << endl;
    Player p4("Ahmed");
    Player::showPlayers();

    return 0;
}
