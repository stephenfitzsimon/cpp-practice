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
    cout << "sometimes ogres--for all their ugly reputation and face--are wise and helpful." << endl;
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
    bool valid_choice = false;
     
    cout << endl << "You fight! Drawing your sword, you raise it as it reflects" <<endl;
    cout << "magical light.  You yell a battle cry and charge! It's a fight to the death!" << endl << endl;

    while (!defeated) {

        while (!valid_choice) {
            cout << "You can choose to aim at the ogre's left, right or middle: " << endl;
            cout << "1 - Aim left\n2 - Aim right\n3 - Aim middle" << endl;
            cout << "Your choice: ";
            cin >> strike_choice;
            valid_choice = strike_choice > 0 & strike_choice < 4;
        }

        if (strike_choice == ogre_choice) {
            cout << "You got him!  Your sword strikes a deep killing blow into the ogre!" << endl;
            cout << "The ogre's body falls to the ground in a growing pool of blood that " << endl;
            cout << "changes from red to black in the fading light of the ogre's magical light" << endl;
            cout << "which dims as quickly as his life does.";
            defeated = true;
        }  else if (strike_choice >= ogre_choice) {
            cout << "You miss! But the ogre is a quick one, and with a dagger that was " << endl;
            cout << "pulled so quickly he guts you! The last thing you see are your guts " << endl;
            cout << "spilling out on the ground before you, and you hear a gloating chuckle..." << endl;
            defeated = true;
        } else if (strike_choice <= ogre_choice) {
            cout << "The ogre dodges the strike! You turn to strike again!" << endl << endl;
            valid_choice = false;
        } else {
            cout << "Something went wrong." << endl;
        }
    }
    return true;
}

int talk() {
    int choice = 0;

    cout << "You move towards the ogre, knowing the delicacy of the situation. As you move " << endl;
    cout << "closer, he stands straight--he's huge! He looks down at you, past his tusks." << endl;
    cout << "'Friend, I am just passing thorugh this wood.' you say." << endl;
    cout << "His eyebrows raise.  He moves his arm towards his side; you see a glint in " << endl;
    cout << "the magical light he conjured.  Your stomach drops and face drains.  What is " << endl;
    cout << "he reaching for?" << endl << endl;
    
    do {
        
    } while (choice < 1 & choice >2)
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