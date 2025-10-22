#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    int numbers[5];  

    
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    
    ofstream file("squares.txt");
    if (file.is_open()) {
        
        for (int i = 0; i < 5; i++) {
            int square = numbers[i] * numbers[i];
            file << "Square of " << numbers[i] << " = " << square << endl;
        }

        file.close();  
        cout << "Squares written to squares.txt successfully!" << endl;
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
