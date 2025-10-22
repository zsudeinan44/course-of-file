#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ifstream file("sample.txt");
    if (!file) {
        cout << "Error opening file." << endl;
        return 1; // Hata varsa programı sonlandır
    }

    char ch;
    int count = 0;

    while (file.get(ch)) {//klavyeden girilen karakterlerin tek tek okunmasını sağlar
        count++;
    }
    file.close(); 
    cout << "Total number of characters in sample.txt: " << count << endl;

    return 0;
}
