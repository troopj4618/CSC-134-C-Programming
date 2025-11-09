/*
CSC 134
M5LAB1
Joseph Troop
11/8/2025
*/

#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_peek_window();
void choice_enter_basement();

// MAIN FUNCTION
int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

// MAIN MENU
void main_menu() {
  cout << "\n=== Main Menu ===" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game..." << endl;
    return; // return to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    main_menu(); // try again
  }
}

// FRONT DOOR PATH
void choice_front_door() {
  cout << "\nYou walk up to the front door." << endl;
  cout << "It's locked tight." << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else {
    cout << "Invalid choice. Try again." << endl;
    choice_front_door();
  }
}

// BACK DOOR PATH
void choice_back_door() {
  cout << "\nYou sneak around to the back of the house..." << endl;
  cout << "There's a faint light coming from a basement window." << endl;
  cout << "Do you:" << endl;
  cout << "1. Peek through the window" << endl;
  cout << "2. Try to open the back door" << endl;
  cout << "3. Run back to the front" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    choice_peek_window();
  } else if (2 == choice) {
    choice_enter_basement();
  } else if (3 == choice) {
    main_menu();
  } else {
    cout << "Invalid choice. Try again." << endl;
    choice_back_door();
  }
}

// GO HOME PATH
void choice_go_home() {
  cout << "\nYou decide this was a bad idea." << endl;
  cout << "You go home, make some popcorn, and watch a movie instead." << endl;
  cout << "Smart move. The spooky house can wait." << endl;
  cout << "THE END." << endl;
}

// NEW BRANCH: PEEK WINDOW
void choice_peek_window() {
  cout << "\nYou crouch down and peek through the dirty basement window..." << endl;
  cout << "You see a flickering candle and... is that a shadow moving?" << endl;
  cout << "Do you:" << endl;
  cout << "1. Knock on the window" << endl;
  cout << "2. Run away fast" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    cout << "The shadow turns. Two glowing eyes stare back at you!" << endl;
    cout << "You trip over your feet and sprint home, never looking back." << endl;
    cout << "THE END." << endl;
  } else if (2 == choice) {
    cout << "You dash back to the street. Maybe curiosity isn’t always good." << endl;
    cout << "THE END." << endl;
  } else {
    cout << "Invalid choice. Try again." << endl;
    choice_peek_window();
  }
}

// NEW BRANCH: ENTER BASEMENT
void choice_enter_basement() {
  cout << "\nYou try the back door... it creaks open slowly." << endl;
  cout << "You step inside. The floorboards groan under your feet." << endl;
  cout << "Suddenly, the door slams behind you!" << endl;
  cout << "Do you:" << endl;
  cout << "1. Look for another exit" << endl;
  cout << "2. Call out 'Hello?'" << endl;
  cout << "Choose: ";

  int choice;
  cin >> choice;

  if (1 == choice) {
    cout << "You find a small window and crawl out safely." << endl;
    cout << "You escape the haunted house. Maybe next time..." << endl;
    cout << "THE END." << endl;
  } else if (2 == choice) {
    cout << "A whisper answers back: 'We've been waiting for you...'" << endl;
    cout << "GAME OVER." << endl;
  } else {
    cout << "Invalid choice. Try again." << endl;
    choice_enter_basement();
  }
}