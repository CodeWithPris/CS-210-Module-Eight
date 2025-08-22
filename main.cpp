#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int sides;
    cout << "Enter the number of sides on your dice: ";
    cin >> sides;

    int roll = (rand() % sides) + 1; // Random number between 1 and sides
    cout << "You rolled a " << roll << "!" << endl;

    // Check for D20 crits
    if (sides == 20) {
        if (roll == 20) {
            cout << "Critical Success! Natural 20!" << endl;
        } 
        else if (roll == 1) {
            cout << "Critical Fail! Natural 1!" << endl;
        }
    }

    return 0;
}
