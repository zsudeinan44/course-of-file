#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    string filename;
    cout << "Enter a filename: ";
    cin >> filename;
    ofstream file(filename); 
    if (file.is_open()) {
        file << "Hello, World!"; 
        file.close();             
        cout << "File created and text written successfully!" << endl;
    }
    else {
        cout << "Error creating file." << endl;
    }

    return 0;
}
