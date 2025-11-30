/*
CSC 134
M6HW1
Joseph Troop
11/30/2025
*/

#include <iostream>
#include <string>
using namespace std;

bool hasKey = false;
bool doorUnlocked = false;

void entrance();
void library();
void treasureRoom();

int main() {
    cout << "=== MYSTIC DUNGEON ADVENTURE ===\n";
    cout << "You wake up inside an ancient stone dungeon.\n";
    cout << "A faded inscription reads:\n";
    cout << "\"Seek the key, unlock the path, and claim your freedom.\"\n\n";

    entrance();
    return 0;
}

void entrance() {
    int choice;

    cout << "\n--- Entrance Hall ---\n";
    cout << "A cold, torch-lit room with two exits.\n";
    cout << "1. Go to the Library\n";
    cout << "2. Approach the Locked Door\n";
    cout << "3. Quit Game\n";
    cout << "What do you do? ";
    cin >> choice;

    switch(choice) {
        case 1:
            library();
            break;

        case 2:
            if (!doorUnlocked) {
                cout << "\nThe door is sealed by a heavy iron lock.\n";
                if (hasKey) {
                    cout << "You use the key to unlock the door!\n";
                    doorUnlocked = true;
                    treasureRoom();
                } else {
                    cout << "You tug at the handle, but it won't budge.\n";
                    entrance();
                }
            } else {
                treasureRoom();
            }
            break;

        case 3:
            cout << "You sit down and accept your fate. Game Over.\n";
            break;

        default:
            cout << "Invalid choice.\n";
            entrance();
            break;
    }
}

void library() {
    int choice;
    static bool keyTaken = false;

    cout << "\n--- Library ---\n";
    cout << "Dusty shelves line the walls. A glowing note sits on a table.\n";
    cout << "\"The key to freedom lies within this chamber.\"\n";

    if (!keyTaken) {
        cout << "You notice a small brass key on the table.\n";
    }

    cout << "\nChoices:\n";
    if (!keyTaken) cout << "1. Pick up the key\n";
    else cout << "1. Look around quietly\n";

    cout << "2. Return to Entrance Hall\n";
    cout << "What do you do? ";
    cin >> choice;

    switch(choice) {
        case 1:
            if (!keyTaken) {
                cout << "\nYou picked up the brass key!\n";
                keyTaken = true;
                hasKey = true;
            } else {
                cout << "\nThe room is quiet. Nothing else of interest.\n";
            }
            library();
            break;

        case 2:
            entrance();
            break;

        default:
            cout << "Invalid choice.\n";
            library();
            break;
    }
}

void treasureRoom() {
    int choice;

    cout << "\n--- Treasure Room ---\n";
    cout << "You've entered a chamber filled with a soft golden glow.\n";
    cout << "A pedestal holds a shining crystal—the Heart of the Dungeon.\n\n";
    cout << "This must be what the inscription meant.\n";
    cout << "You have completed your quest!\n\n";

    cout << "Choices:\n";
    cout << "1. Take the crystal and escape\n";
    cout << "2. Leave it and walk away\n";
    cout << "What do you choose? ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "\nYou grasp the crystal. A portal opens before you.\n";
            cout << "Light surrounds you as you walk into freedom.\n";
            cout << "=== YOU WIN! ===\n";
            break;

        case 2:
            cout << "\nYou turn away. The portal closes.\n";
            cout << "You remain trapped forever in the dungeon.\n";
            cout << "=== BAD ENDING ===\n";
            break;

        default:
            cout << "Invalid choice.\n";
            treasureRoom();
            break;
    }
}