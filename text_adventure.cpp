/*
A text adventure written in C++ for practice
*/

// needed for random number
#include <stdlib.h>
#include <iostream>
using namespace std;


void intro() {
    cout << "Welcome to the adventure! Let's start the story..." << endl << endl;
    cout << "Along a dusty road you travel, a lone adventurer. This is a land you " << endl;
    cout << "don't know--a great mystery.  Strangness all around.  As you move " << endl;
    cout << "along the path, trees glower at you and darken your path.  Though" << endl;
    cout << " it is dark you can see a few feet ahead of you, and in the silence " << endl;
    cout << "you can hear every breath and step you take... " << endl << endl;

    cout << "Suddenly a strange magical light appears on the path ahead of you " << endl;
    cout << "In the unnnatural light, there is a face that is even more unnatural:" << endl;
    cout << "blue skin, red eyes glaring, a grin so wide and gaping that it seems to swallow " << endl;
    cout << "you even from the distance... An ogre!" << endl << endl;
}

int talk_or_fight() {
    int choice = 0;

    cout << "You're terrified!  But in your learning and careful study, you know that " << endl;
    cout << "sometimes ogres--for all their terrible reputation and face--are wise and helpful." << endl;
    cout << "Do you take a chance and try to talk to the ogre, or attack immediatly?" << endl << endl;

    do {
        cout << "1 - Take no chances and draw your sword and attack immediately!" << endl;
        cout << "2 - Take a chance and talk with the ogre and see what you might learn..." <<endl;
        cout << "Your choice : ";
        cin >> choice;
    } while (choice != 1 & choice != 2);

    return choice;
}

bool fight() {
    // get a random choice for the computer
    srand (time(NULL));
    int ogre_choice = rand() % 3 + 1;
    int strike_choice = 0;
    bool defeated = false;
     
    cout << endl << "You fight! Drawing your sword, you raise it as it reflects" <<endl;
    cout << "magical light.  You yell a battle cry and charge! It's a fight to the death!" << endl;
    cout << "";

    while (!defeated) {
        break;
    }
    return true;
}

int talk() {
    return 0;
}

int main() {
    int choice;
    intro();
    choice = talk_or_fight();
    if (choice == 1) {
        fight();
    } else {
        talk();
    }
}