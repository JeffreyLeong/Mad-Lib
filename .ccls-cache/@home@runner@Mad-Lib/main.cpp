/*============================================================================
Write a program that plays the game of Mad Lib. Your program should
prompt the user to enter the following strings:

■ The first or last name of your instructor
■ Your name
■ A food
■ A number between 100 and 120
■ An adjective
■ A color
■ An animal

After the strings are input, they should be substituted into the story below
and output to the console.

Dear Instructor [Instructor Name],

I am sorry that I am unable to turn in my homework at this time. First,
I ate a rotten [Food], which made me turn [Color] and extremely ill. I
came down with a fever of [Number 100-120]. Next, my [Adjective] pet
[Animal] must have smelled the remains of the [Food] on my homework,
because he ate it. I am currently rewriting my homework and hope you
will accept it late.

Sincerely,
[Your Name]

=============================================================================*/
#include <iostream>
using namespace std;

int main() {
  string instructor;
  string user_name;
  string food;
  string number;
  string adjective;
  string color;
  string animal;

  cout << "Please type in the name of your instructor: ";
  cin >> instructor;
  cout << "Please type in your name: ";
  cin >> user_name;
  cout << "Please type in your favorite food: ";
  cin >> food;
  cout << "Pick a number between 100 and 120: ";
  cin >> number;
  cout << "Please type in a adjective: ";
  cin >> adjective;
  cout << "Please type in your favorite color: ";
  cin >> color;
  cout << "Please type in your favorite animal: ";
  cin >> animal;

  cout << endl;
  cout << endl;

  cout << "Dear Instructor " << instructor << ",\n";
  cout << endl;
  cout << "I am sorry that I am unable to turn in my homework at this time. First, \n"
       << "I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I \n"
       << "came down with a fever of " << number << ". Next, my " << adjective << " pet\n"
       << animal << " must have smelled the remains of the " << food << " on the homework,\n"
       << "because he ate it. I am currently rewriting my homework and hope you \n" 
       << "will accept it late.\n\n"
       << "Sincerely,\n"
       << user_name;
return 0;
}
