#include <iostream>
using namespace std;

string readName() {
    string name;
    cout << "Please enter Your name" << endl;
    getline(cin, name);
    return name;
}
void welcomeUser(string name) {
    cout << "Hello, "<<name <<"!" << endl;
}

int main()
{
    welcomeUser(readName());
    return 0;
}
