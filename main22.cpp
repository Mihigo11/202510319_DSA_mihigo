#include <iostream>
#include <string>

using namespace std;

void congratulate(string name) {
     cout << "congratulations " << name << "!" << endl;
}

int main() {
    string username;
    cout << "Enter your name: ";
    cin >> username;

    congratulate(username);

    return 0;
}
