#include <iostream>
#include <fstream> 
using namespace std;

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    ofstream file("names.log", ios::app);//append modu açar sona ekleme

    if (file.is_open()) {
       
        file << firstName << " " << lastName << endl;
        file.close();
        cout << "Name appended to names.log successfully!" << endl;
    }
    else {
        cout << "Error opening file." << endl;
    }

    return 0;
}
