#include <iostream>

using namespace std;

int main()
{
    cout << "enter your name: " << flush;

    // Variable declaration
    string message1;

    // User input
    cin >> message1;

    cout << "Your name: " << message1 << endl;

    cin.get();

    cin.get();

    cout << "enter your age: " << flush;

    // Variable declaration
    int message2;

    // User input
    cin >> message2;

    cin.get();

    cout << "Your age: " << message2 << endl;

    cin.get();

    return 0;
}
